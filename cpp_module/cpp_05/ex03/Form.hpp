#ifndef FORM_HPP
#define FORM_HPP
#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
private:
  std::string const name;
  bool is_signed;
  const int gradetosign;
  const int gradetoexec;
public:
  Form();
  Form(std::string const name, bool is_signed,
        const int gradetosign, const int gradetoexec);
  std::string const getName() const;
  Form(Form const&);
  Form& operator=(Form const&);
  virtual bool getIssigned() const = 0;
  virtual int getGradeTosign() const = 0 ;
  virtual int getGradeToExec() const = 0;
  virtual void beSigned(Bureaucrat const&) = 0;
  virtual void execute(Bureaucrat const& executor) const = 0;
  virtual ~Form();
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

std::ostream& operator<<(std::ostream& cout, Form const&);

#endif