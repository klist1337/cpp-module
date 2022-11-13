#include  "WrongCat.hpp"

WrongCat::WrongCat() : type("WrongCat")
{
    std::cout << "WrongCat constructor called" << std::endl;
}

WrongCat::WrongCat(WrongCat const& cat)
{
    *this = cat;
}

WrongCat& WrongCat::operator=(WrongCat const& cat)
{
    this->type = cat.type;
    return (*this);
}

std::string WrongCat::getType() const
{
    return (this->type);
}

void WrongCat::makeSound() const
{
    std::cout << "Miaouuuuuuuuuuhhhhhhhhhh......." << std::endl;
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat destructor called" << std::endl;
}
