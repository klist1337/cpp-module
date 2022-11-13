#include "Cure.hpp"

Cure::Cure()
{
  this->type = "cure";
}

Cure::Cure(Cure const& cure)
{
  *this = cure;
}

Cure& Cure::operator=(Cure const& cure)
{
  this->type = cure.getType();
  return (*this);
}

AMateria* Cure::clone() const
{
  AMateria* materia = new Cure();
  return (materia);
}

void Cure::use(ICharacter& target)
{
  std::cout << "* heals " << target.getName() 
  << "\'s wounds *" << std::endl;
} 

Cure::~Cure()
{
}