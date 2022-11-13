#include  "Cat.hpp"

Cat::Cat() : type("Cat")
{
    std::cout << "Cat constructor called" << std::endl;
}

Cat::Cat(Cat const& cat)
{
    *this = cat;
}

Cat& Cat::operator=(Cat const& cat)
{
    this->type = cat.type;
    return (*this);
}

std::string Cat::getType() const
{
    return (this->type);
}

void Cat::makeSound() const
{
    std::cout << "Miaouuuuuuuuuuhhhhhhhhhh......." << std::endl;
}

Cat::~Cat()
{
    std::cout << "Cat destructor called" << std::endl;
}
