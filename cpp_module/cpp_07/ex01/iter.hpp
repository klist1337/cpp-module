#ifndef ITER_HPP
#define ITER_HPP
#include <iostream>
template <typename T>
void display(T const& a)
{
  std::cout << a << " " ;
}

template <typename T>
void iter(T* tab, int size, void (*ptr) (T const& a))
{
  int i = 0;
  while (i < size)
  {
    ptr(tab[i]);
    i++;
  }
}

#endif