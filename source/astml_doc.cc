#include <astML/astML.hh>

#include <rapidxml/rapidxml_print.hpp>

#include <fstream>
#include <string>

namespace astmlib {

auto astml_doc::write(const std::string &path) -> void {
  std::ofstream fp(path);
  std::string buffer;

  rapidxml::print(std::back_inserter(buffer), this->xml, 0);
  fp << buffer;
}

} // namespace astmlib
