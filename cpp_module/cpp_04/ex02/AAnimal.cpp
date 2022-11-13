#include "AAnimal.hpp"

AAnimal::AAnimal() : type("AAnimal")
{
    std::cout << "AAnimal constructor called" << std::endl;
}

AAnimal::AAnimal(AAnimal const& animal)
{
    *this = animal;
}

AAnimal& AAnimal::operator=(AAnimal const& animal)
{
    this->type = animal.getType();
    return (*this);
}

AAnimal::~AAnimal()
{
    std::cout << "AAnimal destructor called" << std::endl;
}

std::string AAnimal::getType() const
{
    return (this->type);
} 
