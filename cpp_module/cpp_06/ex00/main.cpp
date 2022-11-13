#include "Convert.hpp"

int main(int ac, char **av)
{
  if (ac - 1 == 1)
  {
    Convert conv;
    std::string s(av[1]);
    if (s == "-inf" || s == "+inf" || s == "nan" 
    || s == "-inff" || s == "+inff" || s == "nanf")
    {
      conv.display_char(s);
      conv.display_int(s);
      conv.display_float(s);
      conv.display_double(s);
    }
    else
    {
    try
    {
      if (check_arg(s) == "int")
        conv.int_handler(s);
      else if (check_arg(s) == "char")
        conv.char_handler(s);
      else if (check_arg(s) == "float")
        conv.float_handler(s);
      else if (check_arg(s) == "double")
        conv.double_Handler(s);
    }
    catch(const std::invalid_argument& e)
    {
      std::cerr << "impossible conversion ! please type valid litteral" << std::endl;
    }
    }
  }
  else
    std::cerr << "Usage [./convert] [litteral]" << std::endl;
}