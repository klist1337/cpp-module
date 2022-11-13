#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(): name(""), grade(0)
{

}

Bureaucrat::Bureaucrat(std::string const name, int grade) : name(name), grade(grade)
{
  try
  {
    if (grade < 1)
      throw Bureaucrat::GradeTooHighException();
    else if (grade > 150)
      throw Bureaucrat::GradeTooLowException();
  }
  catch(const Bureaucrat::GradeTooHighException& a)
  {
    std::cerr << a.what() << std::endl;
  }
  catch(const Bureaucrat::GradeTooLowException& e)
  {
    std::cerr << e.what() << std::endl;
  }
}
Bureaucrat::Bureaucrat(Bureaucrat const &bcr)
{
  *this = bcr;
}

std::string const Bureaucrat::getName() const
{
  return (this->name);
}

int Bureaucrat::getGrade() const
{
  return (this->grade);
}

Bureaucrat& Bureaucrat::operator=(Bureaucrat const &bcr)
{
  this->grade = bcr.getGrade();
  return (*this);
}

std::ostream& operator<<(std::ostream& cout, Bureaucrat const& bcr)
{
  cout << bcr.getName() << ", bureaucrat grade " << bcr.getGrade();
  return cout;
}

void Bureaucrat::increaseGrade()
{
  this->grade -= 1;
  try
  {
    if (this->grade < 1)
      throw Bureaucrat::GradeTooHighException();
  }
  catch(const Bureaucrat::GradeTooHighException& e)
  {
    std::cerr << e.what() << std::endl;
  }
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
  return ("Grade is too low");
}

void Bureaucrat::decreaseGrade()
{
  this->grade += 1;
  try
  {
    if (this->grade > 150)
      throw Bureaucrat::GradeTooLowException();
  }
  catch(const Bureaucrat::GradeTooLowException& e)
  {
    std::cout << e.what() << std::endl;
  }
}

void Bureaucrat::signForm(Form const& form) const
{
  if (form.getGradeTosign() >= this->getGrade())
    std::cout << this->name << " signed " << form.getName() << std::endl;
  else
    std::cout << this->name << " couldn't sign " 
    << form.getName() << " because is grade is too low" << std::endl; 
}

void Bureaucrat::executeForm(Form const& form)
{
  try
  {
    if (this->getGrade() < 1)
      throw Bureaucrat::GradeTooHighException();
    else if (this->getGrade() > form.getGradeToExec())
      throw Bureaucrat::GradeTooLowException();
    else
    {
      std::cout << this->name << " executed "
      << form.getName() << std::endl;
    }
  }
  catch(const Bureaucrat::GradeTooLowException& e)
  {
    std::cerr << e.what() << std::endl;
  }
  catch(const Bureaucrat::GradeTooHighException& a)
  {
    std::cerr << a.what() << std::endl;
  }
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
  return ("Grade is too high");
}

Bureaucrat::GradeTooHighException::GradeTooHighException()
{
  
}

Bureaucrat::GradeTooLowException::GradeTooLowException()
{
  
}
  

Bureaucrat::~Bureaucrat()
{

}