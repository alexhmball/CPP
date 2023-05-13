#include "ScalarConverter.hpp"

int main( int ac, char **arg ) {
	std::string str;
	// ScalarConverter test;

	if (ac == 2)
	{
		// float f;
		// std::istringstream iss ("inf");

		// iss >> f;
		// if (iss.fail())
		// 	std::cout << "somethign wrong\n";
		// else
		// 	std::cout << f << std::endl;
		str = static_cast<std::string>(arg[1]);
		// float f = std::numeric_limits<float>::infinity();
		// if (std::numeric_limits<float>::has_infinity)
		// 	std::cout << f << std::endl;
		ScalarConverter::convert(str);
	}
	else
		std::cout << "one argument is required, not more, not less.\n";
	return 0;
}