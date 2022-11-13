#ifndef INTERN_HPP
#define INTERN_HPP
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"

class Form;
class Intern
{
private:
  /* data */
public:
  Intern();
  Intern(Intern const&);
  Form *f[3];
  Intern& operator=(Intern const&);
  Form *makeForm(std::string const& form, std::string const& target);
  ~Intern();
  class FormDontExistException : public std::exception
  {
  private:
  public:
    FormDontExistException();
    virtual const char* what() const throw();
  };
};

#endif
