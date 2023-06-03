#include <iostream>
#include <string>
#include "swap.hpp"
#include "min.hpp"
#include "max.hpp"
#include "Test.hpp"

int main(void)
{
	int a = 2;
	int b = 3;
	Test test1(10);
	Test test2(7);

	::swap(a, b);
	::swap(test1, test2);

	std::cout << "test1 = " << test1 << " test2 = " << test2 << std::endl;
	std::cout << "min(test1, test2) = " << ::min(test1, test2) << std::endl;
	std::cout << "max(test1, test2) = " << ::max(test1, test2) << std::endl;

	std::cout << "a = " << a << " b = " << b << std::endl;
	std::cout << "min(a,b) = " << ::min(a, b) << std::endl;
	std::cout << "max(a,b) = " << ::max(a, b) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";

	::swap(c, d);

	std::cout << "c = " << c << " d = " << d << std::endl;
	std::cout << "min(c,d) = " << ::min(c, d) << std::endl;
	std::cout << "max(c,d) = " << ::max(c, d) << std::endl;
	return 0;
}