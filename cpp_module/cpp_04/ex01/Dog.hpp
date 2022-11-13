#ifndef DOG_HPP
#define DOG_HPP
#include "Animal.hpp"
#include "Brain.hpp"


class Dog : public Animal
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
    Brain *getBrain() const;
    ~Dog();
};



#endif