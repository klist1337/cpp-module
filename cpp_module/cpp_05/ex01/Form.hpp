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
  bool getIssigned() const;
  int getGradeTosign() const;
  int getGradeToExec() const;
  void beSigned(Bureaucrat const&);
  ~Form();
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