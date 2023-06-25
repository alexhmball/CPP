#include "RPN.hpp"

int main (int ac, char **av) {
	std::string str;

	if (ac > 1) {
		for (int i = 1; av[i]; i++) {
			str += &av[i][0];
			str += " ";
		}
		calc(str);
	} else {
		std::cout << "Error" << std::endl;
	}
	return 0;
}