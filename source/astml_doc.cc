#include <astML/astML.hh>

#include <rapidxml/rapidxml_print.hpp>

#include <fstream>
#include <string>

namespace astmlib {

auto astml_doc::write(const std::string &path) -> void {
  this->xml.save_file(path.c_str());
}

} // namespace astmlib
