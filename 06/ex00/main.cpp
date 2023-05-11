#include "ScalarConverter.hpp"

int main( int ac, char **arg ) {
	float x = -std::numeric_limits<float>::infinity();
	int z = std::numeric_limits<int>::infinity();
	std::cout << x << std::endl;
	std::cout << z << std::endl;
	std::string str;
	if (ac == 2)
	{
		str = static_cast<std::string>(arg[1]);
		std::cout << str.find('.') << std::endl;
		std::cout << std::numeric_limits<size_t>::max() << std::endl;
		std::cout << ScalarConverter::isNotDisplayable(67);
		// std::cout << ScalarConverter::isSpecial(str);
	}
	else
		std::cout << "one argument is required, not more, not less.\n";
	return 0;
}