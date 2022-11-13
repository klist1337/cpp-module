
#include "PresidentialPardonForm.hpp"
#include <fstream>

PresidentialPardonForm::PresidentialPardonForm() : Form(), name("presidential pardon"), is_signed(0),
gradetosign(25), gradetoexec(5), target("")
{

}

PresidentialPardonForm ::PresidentialPardonForm (std::string name, 
bool is_signed, const int gradetosign, const int gradetoexec, std::string target) : Form(name, is_signed, gradetosign, gradetoexec),
name(name), is_signed(is_signed), gradetosign(gradetosign), gradetoexec(gradetoexec), target(target)
{
  try
  {
    if (this->gradetosign > 25 && this->gradetoexec > 5)
      throw PresidentialPardonForm::GradeTooLowException();
  }
  catch(const PresidentialPardonForm::GradeTooLowException& e)
  {
    std::cerr << e.what() << std::endl;
  }
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const& form): Form(form.name, form.is_signed, form.gradetosign, form.gradetoexec),
name(form.name), is_signed(form.is_signed), gradetosign(form.gradetosign), 
gradetoexec(form.gradetoexec), target(form.target)
{

}

PresidentialPardonForm& PresidentialPardonForm::operator=(PresidentialPardonForm const& form)
{
  this->is_signed = form.is_signed;
  return (*this);
}

std::string const PresidentialPardonForm::getName() const
{
  return this->name;
}

int PresidentialPardonForm::getGradeTosign() const
{
  return this->gradetosign;
}

int PresidentialPardonForm::getGradeToExec() const
{
  return this->gradetoexec;
}

bool PresidentialPardonForm::getIssigned() const
{
  return this->is_signed;
}
void PresidentialPardonForm::beSigned(Bureaucrat const& bcr)
{
  try 
  {
    if (bcr.getGrade() < 1)
      throw PresidentialPardonForm::GradeTooHighException();
    else if (bcr.getGrade() <= this->getGradeTosign())
      this->is_signed = true;
    else
    throw PresidentialPardonForm::GradeTooLowException();
  }
  catch (const PresidentialPardonForm::GradeTooLowException& e)
  {
    std::cerr << e.what() << std::endl;
  }
  catch (const PresidentialPardonForm::GradeTooHighException& a)
  {
    std::cerr << a.what() << std::endl;
  }
}

void PresidentialPardonForm::execute(Bureaucrat const& executor) const
{
  try
  {
    if (executor.getGrade() < 1)
      throw PresidentialPardonForm::GradeTooHighException();
    else if (executor.getGrade() > 5)
      throw PresidentialPardonForm::GradeTooLowException();
    else
    {
      std::cout << this->target << " has been forgiven by Zaphod Beeblebrox"
      << std::endl;
    }
  }
  catch(const PresidentialPardonForm::GradeTooHighException& e)
  {
    std::cerr << e.what() << std::endl;
  }
  catch(const PresidentialPardonForm::GradeTooLowException& a)
  {
    std::cerr << a.what() << std::endl;
  }
}

PresidentialPardonForm::GradeTooHighException::GradeTooHighException()
{

}

const char* PresidentialPardonForm::GradeTooHighException::what() const throw()
{
  return ("Grade is too high for this formulaire");
}

const char* PresidentialPardonForm::GradeTooLowException::what() const throw()
{
  return ("Grade is too low for this formulaire");
}


PresidentialPardonForm::GradeTooLowException::GradeTooLowException()
{

}

PresidentialPardonForm ::~PresidentialPardonForm ()
{

}
