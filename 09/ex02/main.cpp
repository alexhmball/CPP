#include <deque>
#include <list>
#include <utility>
#include <sstream>
#include <iostream>

bool check_space(std::string tmp) {
	for (size_t i = 0; i < tmp.length(); i++) {
		if (!isspace(tmp[i]))
			return false;
	}
	return true;
}

bool check_sign(std::string tmp) {
	for (size_t i = 0; i < tmp.length(); i++) {
		if (!isdigit(tmp[i]))
			return false;
	}
	return true;
}

bool check_sort(std::string str) {
	std::deque<size_t> check;
	std::string tmp;
	std::string::size_type pos1;
	std::string::size_type pos2;
	std::string::size_type i = 0;
	size_t num;

	while (str[i]) {
		while (isspace(str[i]) && str[i])
			i++;
		pos1 = i;
		while (!isspace(str[i]) && str[i])
			i++;
		pos2 = i;
		tmp = str.substr(pos1, pos2 - pos1);
		std::stringstream ss(tmp);
		ss >> num;
		std::cout << tmp << std::endl;
		if ((ss.fail() && !check_space(tmp)) || !check_sign(tmp))
			return false;
		else if (!check_space(tmp))
			check.push_back(num);
	}
	for (size_t j = 0; j < check.size(); j++) {
		std::cout << check[j] << " ";
	}
	std::cout << std::endl;
	return true;
}

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