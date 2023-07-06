#include "PmergeMe.hpp"

int main( int ac, char **av ) {
	std::string str;

	if (ac > 1) {
		for (int i = 1; av[i]; i++) {
			str += &av[i][0];
			str += " ";
		}
		if (!check_sort(str))
			std::cout << "Error" << std::endl;
	} else {
		std::cout << "Error" << std::endl;
	}
	return 0;
}