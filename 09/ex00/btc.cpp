#include <map>
#include <algorithm>
#include <sstream>
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>

bool fill_db(std::map<std::string, float> &data_base, std::string file, std::string delim) {
	std::string tmp;
	std::string key;
	std::string tmp_val;
	float value;
	std::fstream data;

	data.open(&file[0]);
	if (!data.is_open()) {
		std::cerr << "couldn't open database\n";
		return false;
	}
	std::getline(data, tmp);
	while (std::getline(data, tmp)) {
		key = tmp.substr(0, tmp.find(delim));
		tmp_val = tmp.substr(tmp.find(delim) + 1, tmp.length());
		std::istringstream iss (tmp_val);

		iss >> value;
		data_base.insert(std::pair<std::string, float>(key, value));
	}
	return true;
}

bool validate_key( std::string key ) {
	struct tm tm;
	if (!strptime(key.c_str(), "%Y-%m-%d", &tm))
		return false;
	if (tm.tm_year + 1900 < 2009)
		return false;
	return true;
}

bool validate_value(std::string val) {
	try {
		val.erase(val.find_first_of(" "), val.find_last_of(" "));
	} catch (std::exception &e) {
		return false;
	}
	if (val.length() == 1 && !isdigit(val[0]))
		return false;
	for (size_t i = 0; i < val.length(); i++) {
		if (!isdigit(val[i]) && val[i] != '.' && !isspace(val[i]))
			return false;
	}
	return true;
}

void find_input(std::map<std::string, float> &data_base, std::string file) {
	std::string tmp;
	std::string key;
	std::string tmp_val;
	float value;
	std::fstream data;
	char *end;

	data.open(&file[0]);
	if (!data.is_open()) {
		std::cerr << "couldn't open input file\n";
		return ;
	}
	std::getline(data, tmp);
	while (std::getline(data, tmp)) {
		key = tmp.substr(0, tmp.find("|") - 1);
		tmp_val = tmp.substr(tmp.find("|") + 1, tmp.length());
		std::istringstream iss (tmp_val);

		iss >> value;
		if (tmp.find("|") == std::string::npos || !validate_key(key))
			std::cerr << "Error: bad input => " << key << std::endl;
		else if (value < 0)
			std::cerr << "Error: not a positive number." << std::endl;
		else if (!validate_value(tmp_val))
			std::cerr << "Error: bad input => " << tmp_val << std::endl;
		else if (std::strtoul(&tmp_val[0], &end, tmp_val.length()) > 1000)
			std::cerr << "Error: too large a number." << std::endl;
		else {
			std::map<std::string, float>::iterator it = data_base.upper_bound(key);
			if (it == data_base.begin())
				std::cout << key << " => " << value << " = " << (value * (it)->second) << std::endl;
			else
				std::cout << key << " => " << value << " = " << (value * (--it)->second) << std::endl;
		}
	}
}

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