#ifndef DOG_HPP
#define DOG_HPP
#include "AAnimal.hpp"
#include "Brain.hpp"


class Dog : public AAnimal
{
private:
std::string type;
Brain* brain;
public:
    Dog();
    Dog(Dog const&);
    Dog& operator=(Dog const&);
    std::string getType() const;
    void makeSound() const;
    AAnimal& operator=(AAnimal const&);
    Brain *getBrain() const;
    ~Dog();
};



#endif