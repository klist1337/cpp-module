#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
private:
    std::string type;
public:
    WrongCat();
    WrongCat(WrongCat const&);
    WrongCat&  operator=(WrongCat const&);
    ~WrongCat();
    std::string getType() const;
    void makeSound() const ;
};



#endif