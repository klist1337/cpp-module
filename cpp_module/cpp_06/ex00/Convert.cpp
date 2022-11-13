#include "Convert.hpp"

Convert::Convert() : ch('\0'), in(0), fl(0.0f), db(0.0)
{
}

Convert::~Convert()
{
}

long Convert::get_Int()
{
  return (this->in);
}

char Convert::get_Char()
{
  return (this->ch);
}

float Convert::get_Float()
{
  return (this->ch);
}

double Convert::get_Double()
{
  return (this->ch);
}

std::string check_arg(std::string& s)
{
  size_t pos, pdot;
  pos = s.find('f');
  pdot = s.find('.');
  if (s.length() == 1 && !isdigit(s[0]))
    return ("char");
  else if (pos == std::string::npos && pdot == std::string::npos)
    return ("int");
  else if (pos != std::string::npos && pdot != std::string::npos)
    return ("float");
  else if (pos == std::string::npos && pdot != std::string::npos)
    return ("double");
  return ("Error");
}

void Convert::display_int(std::string& s)
{
  if (s == "-inf" || s == "+inf" || s == "nan" 
    || s == "-inff" || s == "+inff" || s == "nanf")
    std::cout << "int: impossible" << std::endl;
  else if (this->in > INT_MAX || this->in < INT_MIN)
    std::cout << "int: impossible" << std::endl;
  else
    std::cout << "int: " << this->in << std::endl;
}

void Convert::display_char(std::string &s)
{
  if (s == "-inf" || s == "+inf" || s == "nan" 
    || s == "-inff" || s == "+inff" || s == "nanf")
    std::cout << "char: impossible" << std::endl;
  else if ((this->in >= 0 && this->in <= 32) || this->in == 127)
    std::cout << "char: Non displayable" << std::endl;
  else if (this->in < 0 || this->in > 127)
    std::cout << "char: impossible" << std::endl;
  else
    std::cout << "char: '" << this->ch << "'" << std::endl;
}

void Convert::display_float(std::string &s)
{
  if (s == "-inff" || s == "-inf")
    std::cout << "float: " << "-inff" << std::endl;
  else if (s == "+inff" || s == "+inf")
    std::cout << "float: " << "+inff" << std::endl;
  else if (s == "nanf" || s == "nan")
    std::cout << "float: " << "nanf" << std::endl;
  else if (this->fl < 0 && (this->fl > -std::numeric_limits<float>::min()
    || this->fl < -std::numeric_limits<float>::max()))
      std::cout << "float: impossible" << std::endl;
  else if (this->fl > 0 && (this->fl < std::numeric_limits<float>::min()
    || this->fl > std::numeric_limits<double>::max()) )
      std::cout << "float: impossible" << std::endl;
  else
    std::cout << "float: " << this->fl << ".0f" << std::endl;
}

void Convert::display_float(double &f, std::string &s)
{
  size_t pos;
  pos = s.find(".0f");
  if (s == "-inff" || s == "-inf")
    std::cout << "float: " << "-inff" << std::endl;
  else if (s == "+inff" || s == "+inf")
    std::cout << "float: " << "+inff" << std::endl;
  else if (s == "nanf" || s == "nan")
    std::cout << "float: " << "nanf" << std::endl;
  else if (f < 0 && (f > -std::numeric_limits<float>::min()
    || f < -std::numeric_limits<float>::max()))
      std::cout << "float: impossible" << std::endl;
  else if (f > 0 && (f < std::numeric_limits<float>::min()
    || f > std::numeric_limits<double>::max()) )
      std::cout << "float: impossible" << std::endl;
  else if (pos != std::string::npos)
    std::cout << "float: " << f << ".0f" << std::endl;
  else if (pos == std::string::npos)
    std::cout << "float: " << f << "f" << std::endl;
}

void Convert::display_double(std::string &s)
{
  if (s == "-inff" || s == "-inf")
    std::cout << "double: " << "-inf" << std::endl;
  else if (s == "+inff" || s == "+inf")
    std::cout << "double: " << "+inf" << std::endl;
  else if (s == "nanf" || s == "nan")
    std::cout << "double: " << "nan" << std::endl;
  else if (this->db < 0 && (this->db > -std::numeric_limits<double>::min() 
    || this->db < -std::numeric_limits<double>::max()))
    std::cout << "double: impossible" << std::endl;
  else if (this->db > 0 && (this->db < std::numeric_limits<double>::min()
    || this->db > std::numeric_limits<double>::max()))
      std::cout << "double: impossible" << std::endl;
  else
    std::cout << "double:" << this->db << ".0" << std::endl;
}

void Convert::display_doubleF(std::string &s)
{
  if (s == "-inff" || s == "-inf")
    std::cout << "double: " << "-inf" << std::endl;
  else if (s == "+inff" || s == "+inf")
    std::cout << "double: " << "+inf" << std::endl;
  else if (s == "nanf" || s == "nan")
    std::cout << "double: " << "nan" << std::endl;
  else if (this->db < 0 && (this->db > -std::numeric_limits<double>::min() 
    || this->db < -std::numeric_limits<double>::max()))
    std::cout << "double: impossible" << std::endl;
  else if (this->db > 0 && (this->db < std::numeric_limits<double>::min()
    || this->db > std::numeric_limits<double>::max()))
      std::cout << "double: impossible" << std::endl;
  else if (s.find(".0f") != std::string::npos)
    std::cout << "double:" << this->db << ".0" << std::endl;
  else
    std::cout << "double:" << this->db << std::endl;
}

void Convert::display_doubleD(long double db, std::string &s)
{
  if (s == "-inff" || s == "-inf")
    std::cout << "double: " << "-inf" << std::endl;
  else if (s == "+inff" || s == "+inf")
    std::cout << "double: " << "+inf" << std::endl;
  else if (s == "nanf" || s == "nan")
    std::cout << "double: " << "nan" << std::endl;
  else if (db < 0 && (db > -std::numeric_limits<double>::min() 
    || db < -std::numeric_limits<double>::max()))
    std::cout << "double: impossible" << std::endl;
  else if (db > 0 && (db < std::numeric_limits<double>::min()
    || db > std::numeric_limits<double>::max()))
      std::cout << "double: impossible" << std::endl;
  else
    std::cout << "double:" << db << std::endl;
}

void Convert::int_handler(std::string s)
{
  this->in = std::stol(s);
  this->ch = static_cast<char>(in);
  this->fl = static_cast<float>(in);
  this->db = static_cast<double>(in);
  Convert::display_char(s);
  Convert::display_int(s);
  Convert::display_float(s);
  Convert::display_double(s);
}

void Convert::char_handler(std::string s)
{
  this->ch = s[0];
  this->in = static_cast<int>(ch);
  this->fl = static_cast<float>(ch);
  this->db = static_cast<double>(ch);
  Convert::display_char(s);
  Convert::display_int(s);
  Convert::display_float(s);
  Convert::display_double(s);
}

void Convert::float_handler(std::string s)
{
  double d2;
  d2 = this->fl;
  d2 = std::stod(s);
  this->in = static_cast<long>(d2);
  this->ch = static_cast<char>(d2);
  this->db = d2;
  Convert::display_char(s);
  Convert::display_int(s);
  Convert::display_float(d2, s);
  Convert::display_doubleF(s);
}

void Convert::double_Handler(std::string s)
{
  long double d;
  d = std::stold(s);
  this->in = static_cast<long>(d);
  this->fl = static_cast<float>(d);
  this->ch = static_cast<char>(d);
  this->db = static_cast<double>(d);
  Convert::display_char(s);
  Convert::display_int(s);
  Convert::display_float(this->db, s);
  Convert::display_doubleF(s);
}
