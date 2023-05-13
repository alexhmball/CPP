#include "ScalarConverter.hpp"

int main( int ac, char **arg ) {
	std::string str;
	// ScalarConverter wontCompile;

	if (ac == 2)
	{
		str = static_cast<std::string>(arg[1]);
		ScalarConverter::convert(str);
	}
	else
		std::cout << "one argument is required, not more, not less.\n";
	return 0;
}