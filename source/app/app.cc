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

namespace {

inline auto split_string(const std::string_view &str,
                         const std::string_view &delim)
    -> std::span<std::string> {
  std::vector<std::string> result;
  for (const auto &substr : std::views::split(str, delim)) {
    result.push_back(std::string{substr.begin(), substr.end()});
  }

  return std::span{result};
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
    const auto filename = split_string(path_arg, ".").front();

    auto xml = astml->parse_from(path_arg);
    xml.write(std::format("{}.{}", filename, "xml"));

    if (verbose) {
      std::println("parsed {} successfully", filename);
    }
  }
}

} // namespace astML
