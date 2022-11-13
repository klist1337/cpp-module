#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("WrongAnimal")
{
    std::cout << "WrongAnimal constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const& wronganimal)
{
    *this = wronganimal;
}

WrongAnimal& WrongAnimal::operator=(WrongAnimal const& wronganimal)
{
    this->type = wronganimal.type;
    return (*this);
}

std::string WrongAnimal::getType() const
{
    return (this->type);
} 

void WrongAnimal::makeSound() const
{
    std::cout << "i'm a WrongAnimal" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal destructor called" << std::endl;
}

