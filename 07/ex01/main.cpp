#include "iter.hpp"

#include <iostream>
#include <string>



int main (void) {
	int tab[] = { 0, 1, 2, 3, 4 };
	std::string tab2[] = { "Hello", "World", "!" };
	std::string temp = "screaming!";
	char *words = &temp[0];
	::iter(tab, 5, addOne);
	::iter(tab, 5, print);
	std::cout << std::endl;
	::iter(tab, 5, subOne);
	::iter(tab, 5, print);
	std::cout << std::endl;
	::iter(tab, 5, subOne);
	::iter(tab, 5, print);
	std::cout << std::endl;
	::iter(tab2, 3, print);
	std::cout << std::endl;
	::iter(words, 10, makebig);
	::iter(words, 10, print);
	std::cout << std::endl;
	return 0;
}