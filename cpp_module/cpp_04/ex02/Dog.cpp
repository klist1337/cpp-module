#include  "Dog.hpp"

Dog::Dog() : type("Dog"), brain(new Brain())
{
    std::cout << "Dog constructor called" << std::endl;
}

Dog::Dog(Dog const& dog)
{
    this->type = dog.getType();
    this->brain = new Brain(*(dog.brain));
}

Dog& Dog::operator=(Dog const& dog)
{
    if (brain)
    {
        delete brain;
        brain = nullptr;
    }
    this->type = dog.getType();
    this->brain = new Brain(*(dog.brain));
    return (*this);
}

Brain* Dog::getBrain() const
{
    return (this->brain);
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
    delete this->brain;
    std::cout << "Dog destructor called" << std::endl;
}