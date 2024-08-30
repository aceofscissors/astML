#pragma once

#include <string>
#include <string_view>

#include <pugixml.hpp>

#include <TypeScriptParserVisitor.h>

namespace astmlib {

using xml_doc_t = pugi::xml_document;

struct astml_doc final {
  xml_doc_t xml;

  auto write(const std::string &path) -> void;
};

namespace internal {

class TypescriptASTVisitor : public TypeScriptParserVisitor {};

} // namespace internal

class runner final {
public:
  auto xml_from(const std::string_view &path) -> astml_doc;
  auto source_from(const std::string_view &path) -> astml_doc;

  auto to_source(const astml_doc &doc, const std::string_view &path) -> void;
};

} // namespace astmlib
