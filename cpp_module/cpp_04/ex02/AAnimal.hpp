#ifndef AANIMAL_HPP
#define AANIMAL_HPP
#include <iostream>

class AAnimal
{
protected:
    std::string type;
public:
    AAnimal();
    AAnimal(AAnimal const&);
    AAnimal& operator=(AAnimal const&);
    virtual ~AAnimal();
    virtual std::string getType() const;
    virtual void makeSound() const = 0;
};

#endif