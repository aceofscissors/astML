#include <exception>
#include <format>

#include <astML/util.hh>
#include <pugixml.hpp>

#include <astML/astML.hh>

namespace astmlib {

auto runner::xml_from(const std::string_view &path) -> astml_doc {
  astml_doc doc{};

  auto result = doc.xml.load_file(path.data());
  if (!result) {
    astML::panic(
        std::runtime_error(std::format("Failed to parse XML from {}", path)));
  }

  return doc;
}

auto runner::source_from([[maybe_unused]] const std::string_view &path)
    -> astml_doc {
  astML::panic(std::runtime_error("Not implemented yet"));
}

auto runner::to_source([[maybe_unused]] const astml_doc &doc,
                       [[maybe_unused]] const std::string_view &path) -> void {
  astML::panic(std::runtime_error("Not implemented yet"));
}

} // namespace astmlib
