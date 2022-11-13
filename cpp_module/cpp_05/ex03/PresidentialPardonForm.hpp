#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP
# include "Form.hpp"

class Form;

class PresidentialPardonForm : public Form
{
private:
  std::string const name;
  bool is_signed;
  const int gradetosign;
  const int gradetoexec;
  std::string target;
public:
  PresidentialPardonForm();
  PresidentialPardonForm (std::string name, bool is_signed, 
    const int gradetosign, const int gradetoexec, std::string target);
  PresidentialPardonForm(PresidentialPardonForm const&);
  PresidentialPardonForm& operator=(PresidentialPardonForm const&);
  std::string const getName() const;
  void execute(Bureaucrat const& executor) const;
  int getGradeTosign() const;
  int getGradeToExec() const;
  bool getIssigned() const;
  virtual void beSigned(Bureaucrat const&);
  ~PresidentialPardonForm ();

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
