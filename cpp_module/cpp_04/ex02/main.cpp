#include "Cat.hpp"
#include "Dog.hpp"


int main()
{
int n = -1;
const AAnimal* j = new Dog();
const AAnimal* i = new Cat();
AAnimal *a[4];
//AAnimal b;
while (++n < 2)
  a[n] = new Cat();
n -= 1;
while (++n < 4)
  a[n] = new Dog();
n = 0;
while (n < 4)
{
  a[n]->makeSound();
  n++;
}
for (int i = 0; i < 4; i++)
{
  delete a[i];
}
delete j;//should not create a leak
delete i;
return 0;
}