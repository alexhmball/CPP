#include "BitcoinExchange.hpp"

int main( int ac, char **av ) {
	std::map<std::string, float> data_base;
	if (ac > 1) {
		if (fill_db(data_base, "data.csv", ","))
			find_input(data_base, av[1]);
	} else {
		std::cerr << "Error: couldn't open file" << std::endl;
	}
	return 0;
}