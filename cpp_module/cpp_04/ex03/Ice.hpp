#ifndef ICE_HPP
#define ICE_HPP
#include "AMateria.hpp"
#include "ICharacter.hpp"

class Ice : public AMateria
{
private:

public:
  Ice();
  Ice(Ice const&);
  Ice& operator=(Ice const&);
  AMateria* clone() const;
  void use(ICharacter& target);
  ~Ice();
};

#endif
