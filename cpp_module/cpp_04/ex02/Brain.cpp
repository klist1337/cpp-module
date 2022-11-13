#include "Brain.hpp"

Brain::Brain()
{
  std::cout << "brain constructor called" << std::endl;
}

Brain::Brain(Brain const& brain)
{
  *this = brain;
}

Brain& Brain::operator=(Brain const& brain)
{
  for (int i = 0; i < 100; i++)
  {
    this->ideas[i] = brain.ideas[i];
  }
  return (*this);
}

Brain::~Brain()
{
  std::cout << "brain destructor called" << std::endl;
}