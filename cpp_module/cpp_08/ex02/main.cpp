#include "MutantStack.hpp"
int main()
{
MutantStack<int> mstack;
mstack.push(5);
mstack.push(17);
std::cout << mstack.top() << std::endl;
mstack.pop();
std::cout << mstack.size() << std::endl;
mstack.push(3);
mstack.push(5);
mstack.push(737);
//[...]
mstack.push(0);
MutantStack<int>::iterator it = mstack.begin();
MutantStack<int>::iterator ite = mstack.end();
++it;
--it;
while (it != ite)
{
std::cout << *it << std::endl;
++it;
}
std::stack<int> s(mstack);
while (!s.empty())
{
  std::cout << s.top() << std::endl;
  s.pop();
}
std::cout << s.size() << std::endl;
MutantStack<char> mu_stack;
mu_stack.push('m');
mu_stack.push('e');
mu_stack.push('r');
mu_stack.push('c');
mu_stack.push('i');
std::cout << mu_stack.top() << std::endl;
MutantStack<char>::iterator b = mu_stack.begin();
MutantStack<char>::iterator e = mu_stack.end();
while (b != e)
{
  std::cout << *b ;
  ++b;
}
return 0;
}