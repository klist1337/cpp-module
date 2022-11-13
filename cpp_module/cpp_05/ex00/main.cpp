#include "Bureaucrat.hpp"

int main()
{
  Bureaucrat b("new", 150);
  Bureaucrat c("Eric", 30);
  Bureaucrat a("Smith", 1);
  Bureaucrat e("Nathan", 0);
  Bureaucrat d("Ethan", 152);
  a.increaseGrade();
  b.decreaseGrade();
  d = e;
  d.decreaseGrade();
  std::cout << c << std::endl;
  std::cout << d << std::endl;

}