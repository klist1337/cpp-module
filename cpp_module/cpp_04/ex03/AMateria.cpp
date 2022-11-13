#include "AMateria.hpp"

AMateria::AMateria()
{
}

AMateria::AMateria(std::string const& type) : type(type)
{
  std::cout << "AMateria constructor called" << std::endl;
}

AMateria::AMateria(AMateria const& cpy)
{
  *this = cpy;
}

AMateria& AMateria::operator=(AMateria const& inst)
{
  this->type = inst.getType();
  return (*this);
}

std::string const& AMateria::getType() const
{
  return (this->type);
}

AMateria::~AMateria()
{
}