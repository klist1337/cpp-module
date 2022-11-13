
#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP
# include "Form.hpp"

class Form;

class ShrubberyCreationForm : public Form
{
private:
  std::string const name;
  bool is_signed;
  const int gradetosign;
  const int gradetoexec;
  std::string target;
public:
  ShrubberyCreationForm();
  ShrubberyCreationForm (std::string name, bool is_signed, 
    const int gradetosign, const int gradetoexec, std::string target);
  ShrubberyCreationForm(ShrubberyCreationForm const&);
  ShrubberyCreationForm& operator=(ShrubberyCreationForm const&);
  std::string const getName() const;
  void execute(Bureaucrat const& executor) const;
  int getGradeTosign() const;
  int getGradeToExec() const;
  bool getIssigned() const;
  virtual void beSigned(Bureaucrat const&);
  ~ShrubberyCreationForm ();

  class GradeTooHighException : public std::exception
  {
  private:
  public:
    GradeTooHighException();
    virtual const char* what() const throw(); 
  };

  class GradeTooLowException : public std::exception
  {
  private:
  public:
    GradeTooLowException();
    virtual const char* what() const throw(); 
  };
  
  
};




#endif
