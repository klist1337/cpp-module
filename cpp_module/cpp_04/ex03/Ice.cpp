#include "Ice.hpp"

Ice::Ice()
{
  this->type = "ice";
}

Ice::Ice(Ice const& ice)
{
  *this = ice;
}

Ice& Ice::operator=(Ice const& ice)
{
  this->type = ice.getType();
  return (*this);
}

AMateria* Ice::clone() const
{
  AMateria *materia = new Ice();
  return (materia);
}

void Ice::use(ICharacter& target)
{
  std::cout << "* shoots an ice bolt at " 
  << target.getName() << " *" << std::endl;
} 

Ice::~Ice()
{
}