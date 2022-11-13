#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
int main()
{
  ShrubberyCreationForm form("shubbery creation", false, 145, 137, 
  "jardin");
  RobotomyRequestForm form2("robotomy request", false, 72, 45, "jardin");
  PresidentialPardonForm form3("presidential pardon form", false, 25, 5, "jardin");
  Bureaucrat a("bob", 60);
  Bureaucrat b("julien", 138);
  Bureaucrat c("franck", 45);
  Bureaucrat d("Eric", 5);
  b.signForm(form);
  c.signForm(form2);
  form.execute(a);
  form.execute(b);
  b.executeForm(form);
  a.executeForm(form);
  form2.execute(c);
  c.executeForm(form2);
  d.signForm(form3);
  form3.execute(d);
  d.executeForm(form3);
}