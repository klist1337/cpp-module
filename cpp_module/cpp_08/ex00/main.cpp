#include <vector>
#include <list>
#include "easyfind.hpp"

int main()
{
  std::vector<int> v(4);
  std::list<int> lst;

  v.push_back(45); 
  v.push_back(20); 
  v.push_back(42); 
  v.push_back(1337);

  lst.push_back(226);
  lst.push_back(56);
  lst.push_back(1000);
  lst.push_back(200);
  try
  { 
    //easyfind(v, 45);
    easyfind(lst, 52);
  }
  catch(const std::exception& e)
  {
    std::cerr << "the number can not be found" << std::endl;
  }
}