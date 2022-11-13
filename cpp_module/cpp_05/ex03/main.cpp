#include "Intern.hpp"

int main()
{
  Intern someRandomIntern;
  Form* rrf;
  rrf = someRandomIntern.makeForm("shrubbery creation", "Bender");
  if (rrf)
  {
    Bureaucrat a("bob", 5);
    rrf->execute(a);
    rrf->beSigned(a);
    a.signForm(*rrf);
    a.executeForm(*rrf);
  }
}