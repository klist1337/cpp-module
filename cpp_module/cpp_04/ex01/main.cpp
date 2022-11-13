#include "Cat.hpp"
#include "Dog.hpp"


int main()
{
int n = -1;
const Animal* j = new Dog();
const Animal* i = new Cat();
Animal *a[4];
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