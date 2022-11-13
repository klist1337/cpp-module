#include "Form.hpp"

Form::Form() : name(""), is_signed(0), gradetosign(0), gradetoexec(0)
{
}

Form::Form(std::string const name, bool is_signed,  int gradetosign, 
          const int gradetoexec) : name(name), is_signed(false),
          gradetosign(gradetosign), gradetoexec(gradetoexec)
{
  (void)is_signed;
  try
  {
    if (this->gradetoexec < 1 || this->gradetosign < 1)
    {
      throw Form::GradeTooHighException();
    }
    else if (this->gradetoexec > 150 || this->gradetosign > 150)
    {
      throw Form::GradeTooLowException();
    }
  }
  catch(const Form::GradeTooLowException& e)
  {
    std::cerr << e.what() << std::endl;
  }
  catch(const Form::GradeTooHighException& a)
  {
    std::cerr << a.what() << std::endl;
  }
  
}

Form::Form(Form const& form) : name(form.name), is_signed(form.is_signed),  
gradetosign(form.gradetosign), gradetoexec(form.gradetoexec)
{

}

std::string const Form::getName() const
{
  return this->name;
}

int Form::getGradeTosign() const
{
  return this->gradetosign;
}

int Form::getGradeToExec() const
{
  return this->gradetoexec;
}

bool Form::getIssigned() const
{
  return this->is_signed;
}

Form& Form::operator=(Form const& form)
{
  this->is_signed = form.is_signed;
  return (*this);
}
std::ostream& operator<<(std::ostream& cout, Form const& form)
{
  cout << form.getName() << ", already sign ? " <<  form.getIssigned() 
  << " ,grade to sign this formulaire " << form.getGradeTosign()
  << " grade for his execution " << form.getGradeToExec();
  return cout;
}

void Form::beSigned(Bureaucrat const& bcr)
{
  try 
  {
    if (bcr.getGrade() < 1)
      throw Form::GradeTooHighException();
    else if (bcr.getGrade() <= this->getGradeTosign())
      this->is_signed = true;
    else
    throw Form::GradeTooLowException();
  }
  catch (const Form::GradeTooLowException& e)
  {
    std::cout << e.what() << std::endl;
  }
  catch (const Form::GradeTooHighException& a)
  {
    std::cout << a.what() << std::endl;
  }
}

Form::~Form()
{
}

const char* Form::GradeTooHighException::what() const throw()
{
  return ("Grade is too high");
}

const char* Form::GradeTooLowException::what() const throw()
{
  return ("Grade is too low");
}

Form::GradeTooHighException::GradeTooHighException()
{
}

Form::GradeTooLowException::GradeTooLowException()
{
}