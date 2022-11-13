#include "Base.hpp"
#include <unistd.h>

int main()
{
  Base *b = nullptr;
  Base *c = nullptr;
  b = b->generate();
  sleep(1);
  c = c->generate();
  b->identify(b);
  c->identify(*c);
}