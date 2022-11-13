#include "Intern.hpp"

Intern::Intern()
{
}

Intern::Intern(Intern const& intern)
{
  *this = intern;
}

Intern& Intern::operator=(Intern const& intern)
{
  (void) intern;
  return (*this);
}

Form* Intern::makeForm(std::string const& form, std::string const& target)
{
  if (*this->f)
  {
    for (int i= 0; i < 3; i++)
    delete f[i];
  }
  try
  {
    this->f[0] = new ShrubberyCreationForm("shrubbery creation" , false, 72, 45, target);
    this->f[1] = new RobotomyRequestForm("robotomy request", false, 72, 45, target);
    this->f[2] = new PresidentialPardonForm("presidential pardon", false, 25, 5, target);
    for (int i = 0; i < 3; i++)
    {
      if (f[i]->getName() == form)
      {
        std::cout << "Intern creates " << f[i]->getName() << std::endl;
        return (f[i]);
      }
    }
    throw Intern::FormDontExistException();
  }
  catch(const Intern::FormDontExistException& e)
  {
    std::cerr << e.what() << std::endl;
  }
  return (nullptr);
}

Intern::FormDontExistException::FormDontExistException()
{
}

const char* Intern::FormDontExistException::what() const throw()
{
  return ("Formulaire don't exist");
}

Intern::~Intern()
{
  for (int i = 0; i < 3; i++)
  {
    delete f[i];
  }
}
