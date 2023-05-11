#include <iostream>
#include <string>
#include <limits>

int main( int ac, char **arg ) {
	float x = -std::numeric_limits<float>::infinity();
	int z = std::numeric_limits<int>::infinity();
	std::cout << x << std::endl;
	std::cout << z << std::endl;
	if (ac == 2)
		std::cout << static_cast<std::string>(arg[1]);
	else
		std::cout << "one argument is required, not more, not less.\n";
	return 0;
}