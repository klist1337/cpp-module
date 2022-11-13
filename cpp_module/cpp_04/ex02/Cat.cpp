#include  "Cat.hpp"

Cat::Cat() : type("Cat"), brain(new Brain())
{
    std::cout << "Cat constructor called" << std::endl;
}

Cat::Cat(Cat const& cat)
{
    this->type = cat.getType();
    this->brain = new Brain(*(cat.brain));
}

Cat& Cat::operator=(Cat const& cat)
{
    if (brain)
    {
        delete brain;
        brain = nullptr;
    }
    this->type = cat.getType();
    this->brain = new Brain(*(cat.brain));
    return (*this);
}

Brain* Cat::getBrain() const
{
    return (this->brain);
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
    delete this->brain;
    std::cout << "Cat destructor called" << std::endl;
}
