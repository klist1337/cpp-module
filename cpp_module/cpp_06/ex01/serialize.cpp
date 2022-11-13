#include "serialize.hpp"

uintptr_t serialize(Data *ptr)
{
  uintptr_t rptr = reinterpret_cast<uintptr_t>(ptr);
  return rptr;
}

Data* deserialize(uintptr_t raw)
{
  Data *d;

  d = reinterpret_cast<Data*>(raw);
  return d;
}

