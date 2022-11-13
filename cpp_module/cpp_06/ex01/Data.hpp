#ifndef DATA_HPP
#define DATA_HPP
class Data
{
private:
int d;
char c;
bool b;
public:
  Data();
  Data(Data const&);
  Data& operator=(Data const&);
  int get_Int() const;
  char get_Char() const;
  bool get_Bool() const;
  ~Data();
};


#endif