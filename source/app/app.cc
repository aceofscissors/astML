#include <astML/app.hh>
#include <astML/util.hh>

#include <astML/astML.hh>

#include <array>
#include <format>
#include <print>
#include <ranges>
#include <stdexcept>
#include <string>
#include <string_view>

namespace astML {

namespace {

auto split_string(const std::string_view &str,
                  const std::string_view &delim) -> std::array<std::string> {
  std::vector result;

  const auto split = std::views::split(str, delim);
  for (const auto &substr : split) {
    result.push_back({substr});
  }

  return result;
}

} // namespace

application::application(const program_arguments &&args)
    : launch_arguments{std::move(args)} {
  // program constructor
}

auto application::run() -> void {
  auto astml = std::unique_ptr<astmlib::runner>();

  constexpr bool const verbose =
      true; // TODO(Lavinia): turn this into a CLI option

  for (const auto &path_arg : this->launch_arguments) {
    const auto &[filename, _] = split_string(path_arg, ".");

    auto xml = astml->parse_from(path_arg);
    xml.write(std::format("{}.{}", filename, "xml"));

    if (verbose) {
      std::println("parsed {} successfully", filename);
    }
  }
}

} // namespace astML
