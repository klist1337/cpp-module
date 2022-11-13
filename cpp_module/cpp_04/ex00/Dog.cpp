#include  "Dog.hpp"

Dog::Dog() : type("Dog")
{
    std::cout << "Dog constructor called" << std::endl;
}

Dog::Dog(Dog const& dog)
{
    *this = dog;
}

Dog& Dog::operator=(Dog const& dog)
{
    this->type = dog.type;
    return (*this);
}

std::string Dog::getType() const
{
    return (this->type);
}

void Dog::makeSound() const
{
    std::cout << "Woaaaaaaaaff Waoaaaafffffff.........." << std::endl;
}

Dog::~Dog()
{
    std::cout << "Dog destructor called" << std::endl;
}