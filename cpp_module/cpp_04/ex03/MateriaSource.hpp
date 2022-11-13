#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
private:
AMateria *materia[4];
public:
  MateriaSource();
  MateriaSource(MateriaSource const&);
  MateriaSource& operator=(MateriaSource const&);
  void learnMateria(AMateria*);
  AMateria* createMateria(std::string const& type);
  static int _i;
  ~MateriaSource();
};

#endif

