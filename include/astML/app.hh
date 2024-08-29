#pragma once

#include <astML/util.hh>

namespace astML {
class application final {
  using consolidated_program_arguments = const std::vector<std::string_view>;

private:
  const consolidated_program_arguments launch_arguments;

public:
  application(program_arguments &&args);
  auto run() -> void;
};
} // namespace astML
