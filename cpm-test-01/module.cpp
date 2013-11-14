
#include "module.hpp"

#include <sstream>

namespace CPM_TEST_01_NS {

std::string test01Function(std::string str, int num)
{
  std::stringstream ss;
  ss << str << "test_01_v_0.3 - " << num;
  return ss.str();
}

} // namespace CPM_TEST_01_NS 
