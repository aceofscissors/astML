#include <astML/app.hh>
#include <astML/util.hh>

#include <print>

#include <stdexcept>

namespace astML {

application::application(const program_arguments &&args)
    : launch_arguments{std::move(args)} {
  // program constructor
}

auto application::run() -> void {
  std::println("funfa!");
  return;
}

} // namespace astML
