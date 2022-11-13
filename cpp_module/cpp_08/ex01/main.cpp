#include "Span.hpp"

int main()
{
Span sp = Span(100);
//int arr[] = {47, 565, 78797, 454554, 54, 56456456, 787878};
sp.addNumber(90);
sp.addNumber(12);
sp.addNumber(17);
sp.addNumber(9);
sp.addNumber(2000);
// sp.addNumber(12);
// sp.addNumber(15);
std::cout << sp.shortestSpan() << std::endl;
std::cout << sp.longestSpan() << std::endl;
// int size = sizeof(arr) / sizeof(arr[0]);
// sp.addMultipleNumber(arr, size);
// sp.print();
// std::cout << sp.shortestSpan() << std::endl;
// std::cout << sp.longestSpan() << std::endl;
return 0;
}