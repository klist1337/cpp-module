#ifndef CAT_HPP
#define CAT_HPP
#include "Animal.hpp"

class Cat : public Animal
{
private:
    std::string type;
public:
    Cat();
    Cat(Cat const&);
    Cat&  operator=(Cat const&);
    ~Cat();
    std::string getType() const;
     void makeSound() const ;
};



#endif