
#include "RobotomyRequestForm.hpp"
#include <fstream>
#include <cstdlib>
#include <time.h> 

RobotomyRequestForm::RobotomyRequestForm() : Form(), name("robotomy request"), is_signed(0),
gradetosign(72), gradetoexec(45), target("")
{

}

RobotomyRequestForm ::RobotomyRequestForm (std::string name, 
bool is_signed, const int gradetosign, const int gradetoexec, std::string target) : Form(name, is_signed, gradetosign, gradetoexec),
name(name), is_signed(is_signed), gradetosign(gradetosign), gradetoexec(gradetoexec), target(target)
{
  try
  {
    if (this->gradetosign > 72 && this->gradetoexec > 45)
      throw RobotomyRequestForm::GradeTooLowException();
  }
  catch(const RobotomyRequestForm::GradeTooLowException& e)
  {
    std::cerr << e.what() << std::endl;
  }
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const& form): Form(form.name, form.is_signed, form.gradetosign, form.gradetoexec),
name(form.name), is_signed(form.is_signed), gradetosign(form.gradetosign), 
gradetoexec(form.gradetoexec), target(form.target)
{

}

RobotomyRequestForm& RobotomyRequestForm::operator=(RobotomyRequestForm const& form)
{
  this->is_signed = form.is_signed;
  return (*this);
}

std::string const RobotomyRequestForm::getName() const
{
  return this->name;
}

int RobotomyRequestForm::getGradeTosign() const
{
  return this->gradetosign;
}

int RobotomyRequestForm::getGradeToExec() const
{
  return this->gradetoexec;
}

bool RobotomyRequestForm::getIssigned() const
{
  return this->is_signed;
}
void RobotomyRequestForm::beSigned(Bureaucrat const& bcr)
{
  try 
  {
    if (bcr.getGrade() < 1)
      throw RobotomyRequestForm::GradeTooHighException();
    else if (bcr.getGrade() <= this->getGradeTosign())
      this->is_signed = true;
    else
    throw RobotomyRequestForm::GradeTooLowException();
  }
  catch (const RobotomyRequestForm::GradeTooLowException& e)
  {
    std::cerr << e.what() << std::endl;
  }
  catch (const RobotomyRequestForm::GradeTooHighException& a)
  {
    std::cerr << a.what() << std::endl;
  }
}

void RobotomyRequestForm::execute(Bureaucrat const& executor) const
{
  try
  {
    if (executor.getGrade() < 1)
      throw RobotomyRequestForm::GradeTooHighException();
    else if (executor.getGrade() > 45)
      throw RobotomyRequestForm::GradeTooLowException();
    else
    {
      srand(time(NULL));
      for (int i = 0; i < 100 ; i++)
      {
        int number = rand() % 100 + 1;
        if (!(number % 2))
          std::cout << "Drill sound" << std::endl;
        else
          throw RobotomyRequestForm::OperationFailedException();
        break;
      }
    }
  }
  catch(const RobotomyRequestForm::GradeTooHighException& e)
  {
    std::cerr << e.what() << std::endl;
  }
  catch(const RobotomyRequestForm::GradeTooLowException& a)
  {
    std::cerr << a.what() << std::endl;
  }
  catch(const RobotomyRequestForm::OperationFailedException& i)
  {
    std::cerr << i.what() << std::endl;
  }
}

RobotomyRequestForm::GradeTooHighException::GradeTooHighException()
{

}
RobotomyRequestForm::GradeTooLowException::GradeTooLowException()
{

}
const char* RobotomyRequestForm::GradeTooHighException::what() const throw()
{
  return ("Grade is too high for this formulaire");
}

const char* RobotomyRequestForm::GradeTooLowException::what() const throw()
{
  return ("Grade is too low for this formulaire");
}

RobotomyRequestForm::OperationFailedException::OperationFailedException()
{
}

const char* RobotomyRequestForm::OperationFailedException::what() const throw()
{
  return ("Robotomy operation failed");
}

RobotomyRequestForm ::~RobotomyRequestForm ()
{

}
