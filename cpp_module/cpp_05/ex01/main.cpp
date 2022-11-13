#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
  Bureaucrat b("new", 150);
  Bureaucrat c("Eric", 10);
  Bureaucrat a("Smith", 1);
  Bureaucrat e("Nathan", 0);
  Bureaucrat d("Ethan", 5);
  Form f("recouvrement", false, 10, 40);
  a.decreaseGrade();
  b.increaseGrade();
  d = e;
  d.decreaseGrade(); 
  f.beSigned(d);
  b.signForm(f);
  std::cout << c << std::endl;
  std::cout << d << std::endl;
  std::cout << f << std::endl;
}