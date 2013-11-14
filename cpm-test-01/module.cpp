
#include "module.hpp"

#include <sstream>

namespace CPM_TEST_01_NS {

std::string test01Function(std::string str, int num, int num2)
{
  std::stringstream ss;
  ss << str << "test_01_v_MASTER - " << num << " - " << num2;
  return ss.str();
}

} // namespace CPM_TEST_01_NS 
