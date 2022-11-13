
#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm() : Form(), name("shrubbery creation"), is_signed(0),
gradetosign(145), gradetoexec(137), target("")
{

}

ShrubberyCreationForm::ShrubberyCreationForm (std::string name, 
bool is_signed, const int gradetosign, const int gradetoexec, std::string target) : Form(name, is_signed, gradetosign, gradetoexec),
name(name), is_signed(is_signed), gradetosign(gradetosign), gradetoexec(gradetoexec), target(target)
{
  try
  {
    if (this->gradetosign > 145 && this->gradetoexec > 137)
      throw ShrubberyCreationForm::GradeTooLowException();
  }
  catch(const ShrubberyCreationForm::GradeTooLowException& e)
  {
    std::cerr << e.what() << std::endl;
  }
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const& form): Form(form.name, form.is_signed, form.gradetosign, form.gradetoexec),
name(form.name), is_signed(form.is_signed), gradetosign(form.gradetosign), 
gradetoexec(form.gradetoexec), target(form.target)
{

}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(ShrubberyCreationForm const& form)
{
  this->is_signed = form.is_signed;
  return (*this);
}

std::string const ShrubberyCreationForm::getName() const
{
  return this->name;
}

int ShrubberyCreationForm::getGradeTosign() const
{
  return this->gradetosign;
}

int ShrubberyCreationForm::getGradeToExec() const
{
  return this->gradetoexec;
}

bool ShrubberyCreationForm::getIssigned() const
{
  return this->is_signed;
}
void ShrubberyCreationForm::beSigned(Bureaucrat const& bcr)
{
  try 
  {
    if (bcr.getGrade() < 1)
      throw ShrubberyCreationForm::GradeTooHighException();
    else if (bcr.getGrade() <= this->getGradeTosign())
      this->is_signed = true;
    else
    throw ShrubberyCreationForm::GradeTooLowException();
  }
  catch (const ShrubberyCreationForm::GradeTooLowException& e)
  {
    std::cerr << e.what() << std::endl;
  }
  catch (const ShrubberyCreationForm::GradeTooHighException& a)
  {
    std::cerr << a.what() << std::endl;
  }
}

void ShrubberyCreationForm::execute(Bureaucrat const& executor) const
{
  try
  {
    if (executor.getGrade() < 1)
      throw ShrubberyCreationForm::GradeTooHighException();
    else if (executor.getGrade() > 137)
      throw ShrubberyCreationForm::GradeTooLowException();
    else
    {
            std::ofstream out(this->target + "_shrubberry");
            out << "      ,@@@@@@@," << std::endl;
            out << "      ,,,.   ,@@@@@@/@@,  .oo8888o."<< std::endl;
            out <<"     ,&%&%&&%,@@@@@/@@@@@@,8888\\88/8o"<< std::endl;
            out <<"    ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88"<< std::endl;
            out <<"   %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'" << std::endl;
            out <<"  %&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'" << std::endl;
            out <<"   `&%\\ ` /%&'   |.|        \\ '|8'" << std::endl;
            out <<"   |o|            | |         | |" << std::endl;
            out <<"    |.|            | |         | |" << std::endl;
            out <<"  \\/ ._\\//_/__/  ,\\_//__\\/.  \\_//__/__"<< std::endl;
    }
  }
  catch(const ShrubberyCreationForm::GradeTooHighException& e)
  {
    std::cerr << e.what() << std::endl;
  }
  catch(const ShrubberyCreationForm::GradeTooLowException& a)
  {
    std::cerr << a.what() << std::endl;
  }
}

ShrubberyCreationForm::GradeTooHighException::GradeTooHighException()
{

}

const char* ShrubberyCreationForm::GradeTooHighException::what() const throw()
{
  return ("Grade is too high for this formulaire");
}

const char* ShrubberyCreationForm::GradeTooLowException::what() const throw()
{
  return ("Grade is too low for this formulaire");
}


ShrubberyCreationForm::GradeTooLowException::GradeTooLowException()
{
}

ShrubberyCreationForm ::~ShrubberyCreationForm ()
{

}
