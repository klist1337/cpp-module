#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP
#include <iostream>

class WrongAnimal
{
protected:
    std::string type;
public:
    WrongAnimal();
    WrongAnimal(WrongAnimal const&);
    WrongAnimal& operator=(WrongAnimal const&);
    virtual ~WrongAnimal();
    std::string getType() const;
    void makeSound() const;
};


#endif