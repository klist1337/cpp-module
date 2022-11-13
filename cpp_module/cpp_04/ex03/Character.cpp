#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"

Character::Character() : ICharacter()
{
}

Character::Character(std::string const& name)
{
  this->name = name;
}

Character::Character(Character const& chr)
{
  this->name = chr.name;
  for (int i = 0; i < 4; i++)
  {
    delete materia[i];
  }
  for (int i = 0; i < 2; i++)
  {
    this->materia[i] = new Cure();
  }
  for (int i = 2; i < 4; i++)
  {
    this->materia[i] = new Ice();
  }
}

std::string const& Character::getName() const
{
  return (this->name);
}

Character& Character::operator=(Character const& chr)
{
  this->name = chr.getName();
  for (int i = 0; i < 4; i++)
  {
    delete materia[i];
  }
  for (int i = 0; i < 2; i++)
  {
    this->materia[i] = new Cure();
  }
  for (int i = 2; i < 4; i++)
  {
    this->materia[i] = new Ice();
  }
  return (*this);
}

void Character::equip(AMateria *m)
{
  this->materia[Character::_i] = m;
  Character::_i++;
}

void Character::unequip(int idx)
{
  if (idx >= 0 && idx <= 3)
  {
    this->materia[idx] = nullptr;
  }
  else
    std::cout << "Wrong index" << std::endl;
}

void Character::use(int idx, ICharacter& target)
{
  if (idx >= 0 && idx <= 3)
    this->materia[idx]->use(target);
}

Character::~Character()
{
  for (int i = 0; i < 4; i++)
  {
    delete this->materia[i];
  }
}

int Character::_i = 0;