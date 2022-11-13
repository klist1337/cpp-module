#ifndef CONVERT_HPP
#define CONVERT_HPP
#include <iostream>
#include <climits>
#include <limits>
#include <string>
class Convert
{
private:
  char ch;
  long  in;
  float fl;
  double db;
public:
  Convert();
  Convert(Convert const&);
  Convert& operator=(Convert const&);
  char get_Char();
  long get_Int();
  float get_Float();
  double get_Double();
  void display_int(std::string& s);
  void display_char(std::string& s);
  void display_float(std::string &s);
  void display_float(double &f, std::string &s);
  void display_double(std::string &s);
  void display_doubleF(std::string &s);
  void display_doubleD(long double db, std::string &s);
  void int_handler(std::string s);
  void char_handler(std::string s);
  void float_handler(std::string s);
  void double_Handler(std::string s);
  ~Convert();
};
std::string check_arg(std::string& s);

#endif