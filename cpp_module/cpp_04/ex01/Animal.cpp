#include "Animal.hpp"

Animal::Animal() : type("Animal")
{
    std::cout << "Animal constructor called" << std::endl;
}

Animal::Animal(Animal const& animal)
{
    *this = animal;
}

Animal& Animal::operator=(Animal const& animal)
{
    this->type = animal.getType();
    return (*this);
}

Animal::~Animal()
{
    std::cout << "Animal destructor called" << std::endl;
}

std::string Animal::getType() const
{
    return (this->type);
} 

void Animal::makeSound() const
{
    std::cout << "i'm an animal" << std::endl;
}
