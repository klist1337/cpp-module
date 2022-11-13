#include "MateriaSource.hpp"

MateriaSource::MateriaSource() : IMateriaSource()
{
  
}

void MateriaSource::learnMateria(AMateria *materia)
{
  this->materia[MateriaSource::_i] = materia->clone();
  MateriaSource::_i++;
}

AMateria* MateriaSource::createMateria(std::string const& type)
{
    for (int i = 0; i < 4; i++)
    {
      if (this->materia[i]->getType() == type)
      {
        return this->materia[i];
      }
    }
    return (NULL);
}

MateriaSource::~MateriaSource()
{

}

int MateriaSource::_i = 0;