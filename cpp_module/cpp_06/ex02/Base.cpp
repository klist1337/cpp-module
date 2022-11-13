#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base::~Base()
{

}

Base* Base::generate()
{
  int r;
  Base *b;
  srand(time(0));
  r = rand() % 3 + 1;
  std::cout << "r = " << r << std::endl;
  switch (r)
  {
  case 1:
    b = new A();
    break;
  case 2:
    b = new B();
    break;
  default:
    b = new C();
    break;
  }
  return b;
}

void Base::identify(Base *p)
{
  if (dynamic_cast<A*>(p) != NULL)
    std::cout << "p is an object A pointer" << std::endl;
  else if (dynamic_cast<B*>(p) != NULL)
    std::cout << "p is an object B pointer" << std::endl;
  else if (dynamic_cast<C*>(p) != NULL)
    std::cout << "p is an object C pointer" << std::endl;
}

void Base::identify(Base &p)
{
  A a;
  B b;
  C c;
  try
  {
    a = dynamic_cast<A &>(p);
    std::cout << "p is an object A pointer" << std::endl;
  }
  catch(const std::exception& e)
  {
    try
    {
      b = dynamic_cast<B &>(p);
      std::cout << "p is an object B pointer" << std::endl;
    }
    catch(const std::exception& e)
    {
      try
      {
        c = dynamic_cast<C &> (p);
        std::cout << "p is an object C pointer" << std::endl; 
      }
      catch (const std::exception& e)
      {
        std::cerr << e.what() << std::endl;
      }
    }
  }
}