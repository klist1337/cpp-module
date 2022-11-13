#ifndef CHARACTER_HPP
# define CHARACTER_HPP
# include "ICharacter.hpp"

class Character : public ICharacter
{
private:
 std::string name;
 AMateria *materia[4];
public:
  Character();
  Character(std::string const& name);
  Character(Character const&);
  std::string const& getName() const;
  Character& operator=(Character const&);
  void equip(AMateria* m);
  void unequip(int idx);
  void use(int idx, ICharacter& target);
  static int _i;
  ~Character();
};

#endif