#include "Data.hpp"

Data::Data() : d(2), c('e'), b(false)
{
}

Data::Data(Data const& data)
{
  *this = data;
}
int Data::get_Int() const
{
  return this->d;
}
char Data::get_Char() const
{
  return this->c;
}
bool Data::get_Bool() const
{
  return this->b;
}

Data& Data::operator=(Data const& data)
{
  this->d = data.d;
  this->c = data.c;
  this->d = data.b;
  return (*this);
}

Data::~Data()
{
}
