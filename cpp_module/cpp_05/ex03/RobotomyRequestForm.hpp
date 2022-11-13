
#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP
# include "Form.hpp"

class Form;

class RobotomyRequestForm : public Form
{
private:
  std::string const name;
  bool is_signed;
  const int gradetosign;
  const int gradetoexec;
  std::string target;
public:
  RobotomyRequestForm();
  RobotomyRequestForm (std::string name, bool is_signed, 
    const int gradetosign, const int gradetoexec, std::string target);
  RobotomyRequestForm(RobotomyRequestForm const&);
  RobotomyRequestForm& operator=(RobotomyRequestForm const&);
  std::string const getName() const;
  void execute(Bureaucrat const& executor) const;
  int getGradeTosign() const;
  int getGradeToExec() const;
  bool getIssigned() const;
  virtual void beSigned(Bureaucrat const&);
  ~RobotomyRequestForm ();

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
  
  class OperationFailedException : public std::exception
  {
  private:
  public:
    OperationFailedException();
    virtual const char* what() const throw(); 
  };
  
};




#endif
