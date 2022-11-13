#ifndef SPAN_HPP
#define SPAN_HPP
#include <iostream>
#include <vector>
#include <algorithm>
class Span
{
private:
unsigned int size;
std::vector<int> v; 
public:
  Span();
  Span(unsigned int N);
  Span(Span const&);
  Span& operator=(Span const&);
  void print();
  void addNumber(int n);
  int shortestSpan(); 
  int longestSpan();
  void addMultipleNumber(int arr[], int size);
  static int _i;
  ~Span();
};

#endif