#include <astML/astML.hh>

#include <fstream>

namespace astmlib {

auto astml_doc::write(const std::string_view &path) -> void {
  std::ofstream fp{path};
  fp << this->xml;
}

} // namespace astmlib
