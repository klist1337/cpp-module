#ifndef ARRAY_HPP
#define ARRAY_HPP
#include <iostream>
template <typename T>
class Array
{
private:
T *tab;
unsigned int _n;
public:
  Array()
  {
    this->_n = 1;
    this->tab = new T();
  }

  Array(unsigned int n)
  {
    this->_n = n;
    this->tab = new T[n];
    for (unsigned int i = 0; i < n; i++)
      tab[i] = 0;
  }

  Array(Array const& arr)
  {
    this->_n = arr._n;
    tab = new T[arr._n];
    for (unsigned int i = 0; i < arr._n ; i++)
      tab[i] = arr.tab[i];
  }

  Array& operator=(Array const& arr)
  {
    if (this->tab)
      delete tab;
    this->_n = arr._n;
    tab = new T[arr._n];
    for (unsigned int i = 0; i < arr._n ; i++)
      tab[i] = arr.tab[i];
    return (*this);
  }

  void print() const
  {
    for (unsigned int i = 0; i < this->_n; i++)
      std::cout << tab[i] << std::endl;
  }

  T& operator[](int index)
  {
      if (index < 0 || static_cast <unsigned int> (index) >= size() )
       throw (std::exception());
      return tab[index];
  }

  size_t size() const
  {
    return (this->_n);
  }

  ~Array()
  {
    if (this->_n == 1)
      delete tab;
    else if (this->_n > 1)
    {
      delete [] tab;
    }
  }
};

 
#endif