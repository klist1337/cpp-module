#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP
#include <iostream>
class Bureaucrat
{
private:
  std::string const name;
  int grade;
public:
  Bureaucrat();
  Bureaucrat(std::string const name, int grade);
  Bureaucrat(Bureaucrat const&);
  Bureaucrat& operator=(Bureaucrat const&);
  std::string const getName() const;
  int getGrade() const;
  void decreaseGrade();
  void increaseGrade();
  ~Bureaucrat();
  class GradeTooHighException : public std::exception
  {
  public:
    GradeTooHighException();
    virtual const char* what() const throw();
  };
  
  class GradeTooLowException : public std::exception
  {
  public:
    GradeTooLowException();
    virtual const char* what() const throw();
  };
  
};
std::ostream &operator<<(std::ostream &cout, Bureaucrat const&); 
#endif