#include "Span.hpp"
#include <iterator>
int abs_value(int a)
{
  if (a < 0)
    return (-a);
  return (a);
}

Span::Span() : size(1)
{
}

Span::Span(unsigned int N)
{
  this->size = N;
}

Span::Span(Span const& span)
{
  *this = span;
}
Span& Span::operator=(Span const& span)
{
  this->v = span.v;
  this->size = span.size;
  return *this;
}

void Span::print()
{
  for (std::vector<int>::iterator it = v.begin(); it != v.end(); ++it)
  {
    std::cout << " " << *it << std::endl;
  }
}
void Span::addNumber(int n)
{
  try
  {
    if (static_cast<unsigned int>(_i) >= this->size)
      throw std::exception();
    else
    {
      v.push_back(n);
      _i++;
    }
  }
  catch(const std::exception& e)
  {
    std::cerr << "You reached the max of element added" << std::endl;
  }
  
}

int Span::shortestSpan()
{
  std::vector<int> vec;
  int x = v.size();
  for (int i = 0; i < x; i++)
  {
    for (int y = i + 1; y < x ; y++)
    {
      vec.push_back(abs_value(v[i] - v[y]));
    }
  }
  return (*std::min_element(vec.begin(), vec.end()));
}

int Span::longestSpan()
{
  int x = v.size();
  std::vector<int> vec;
  for (int i = 0; i < x; i++)
  {
    for (int y = i + 1; y < x; y++)
    {
      vec.push_back(abs_value(v[i] - v[y]));
    }
  }
  return (*std::max_element(vec.begin(), vec.end()));
}


void Span::addMultipleNumber(int arr[], int size)
{
  try
  {
    if (static_cast<unsigned int>(Span::_i) >= this->size)
      throw std::exception();
    v.insert(v.end(), arr, arr + size);
  }
  catch(const std::exception& e)
  {
   std::cerr << "You reached the max of element added" << std::endl;
  }
}

Span::~Span()
{
}

int Span::_i = 0;