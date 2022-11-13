#ifndef EASYFIND_HPP
#define EASYFIND_HPP
#include <iostream>
#include <algorithm>

template <typename T>
void easyfind(T& a, int x)
{
  typename T::iterator it;
  it = find(a.begin(), a.end(), x);
  if (it != a.end())
  {
    std::cout << x << " has been found" << std::endl;
    return ;
  }
  throw (std::exception());
}
#endif