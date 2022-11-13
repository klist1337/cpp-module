#ifndef CURE_HPP
#define CURE_HPP
#include "ICharacter.hpp"

class Cure : public AMateria
{
private:

public:
  Cure();
  Cure(Cure const&);
  Cure& operator=(Cure const&);
  AMateria* clone() const;
  // AMateria* clone(AMateria *materia) const;
  void use(ICharacter& target);
  ~Cure();
};



#endif
