#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP
#include <iostream>
#include <vector>
#include <stack>
template <typename T>
class MutantStack : public std::stack<T>
{
public:
typedef typename std::deque<T> container;
typedef typename container::iterator iterator;
typedef typename container::const_iterator const_iterator;
typedef typename container::reverse_iterator r_iterator;
iterator begin()
{
  return this->c.begin();
}
iterator end()
{
  return this->c.end();
}
const_iterator begin() const
{
  return this->c.begin();
}

const_iterator end() const
{
  return this->c.end();
}

};

#endif