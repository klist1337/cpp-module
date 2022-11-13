#ifndef CAT_HPP
#define CAT_HPP
#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal
{
private:
    std::string type;
    Brain* brain;
public:
    Cat();
    Cat(Cat const&);
    Cat&  operator=(Cat const&);
    ~Cat();
    std::string getType() const;
    void makeSound() const ;
    Brain *getBrain() const;
};



#endif