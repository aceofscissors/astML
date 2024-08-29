#include <astML/app.hh>
#include <astML/util.hh>

#include <exception>
#include <print>
#include <stacktrace>

#include <cxxabi.h>

namespace {

auto global_exception_handler() -> void {
  const auto stacktrace = std::stacktrace::current(1);
  const auto current_exception = std::current_exception();

#ifdef __GNUG__
  const auto current_exception_typename =
      abi::__cxa_current_exception_type()->name();
  std::println("uncaught exception of type {}",
               astML::util::cxx_demangle(current_exception_typename));
#else
  std::println("uncaught exception (type is not known)");
#endif

  try {
    if (current_exception) {
      std::rethrow_exception(current_exception);
    }
  } catch (const std::exception &err) {
    std::println("  what: {}", err.what());
  } catch (...) {
    std::println("  exception message is not known.");
  }

  astML::util::print_stacktrace(std::move(stacktrace));
  __builtin_trap();
}

} // namespace

auto main(int argc, char **argv) -> int {
  std::set_terminate(global_exception_handler);

  astML::application app{astML::util::build_program_arguments(argc, argv)};
  app.run();
}
