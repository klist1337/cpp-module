#include "serialize.hpp"

int main()
{
  Data p;
  Data *d = &p;
  uintptr_t ptr;
  Data *data;

  std::cout << d->get_Int() << std::endl;
  std::cout << d->get_Char() << std::endl;
  ptr = serialize(d);
  std::cout << "uintptr_t:" << ptr << std::endl;
  std::cout << "data adresse:"<< &d << std::endl;
  data = deserialize(ptr);
  std::cout << "data adresse:"<< &d << std::endl;
  std::cout << data->get_Int() << std::endl;
  std::cout << data->get_Char() << std::endl;
}