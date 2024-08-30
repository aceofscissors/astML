#include <astML/astML.hh>
#include <astML/util.hh>

#include <pugixml.hpp>

#include <exception>

namespace astmlib {

auto runner::parse_from(const std::string_view &path) -> astml_doc {
  astml_doc doc{};

  auto result = doc.xml.load_file(path.data());
  astML::assert("XML document loads successfully", result);

  return doc;
}

auto runner::generate_to(const astml_doc &doc, const std::string_view &path)
    -> void {
  astML::panic(std::runtime_error("Not implemented yet"));
}

} // namespace astmlib
