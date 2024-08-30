#include <astML/app.hh>
#include <astML/util.hh>

#include <astML/astML.hh>

#include <format>
#include <print>
#include <span>
#include <stdexcept>
#include <string>
#include <string_view>
#include <tuple>

namespace astML {

application::application(const program_arguments &&args)
    : launch_arguments{std::move(args)} {
  // program constructor
}

auto application::run() -> void {
  auto astml = std::unique_ptr<astmlib::runner>();

  for (const auto &path_arg : this->launch_arguments | std::views::drop(1)) {
    // TODO(Lavinia)
  }
}

} // namespace astML
