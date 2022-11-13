#include "iter.hpp"

int main()
{
  int tab[4] = { 7 , 787, 898, 5454};
  char str[] =  "Bonjour comment allez vous";
  int size = sizeof(str)/ sizeof(char);
  iter(tab, 4, display);
  std::cout << std::endl;
  iter(str, size, display);
}
