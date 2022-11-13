#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <iostream>

class Animal
{
protected:
    std::string type;
public:
    Animal();
    Animal(Animal const&);
    Animal& operator=(Animal const&);
    virtual ~Animal();
    virtual std::string getType() const;
    virtual void makeSound() const;
};




#endif