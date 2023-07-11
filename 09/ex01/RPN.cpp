#include "RPN.hpp"

bool add(std::vector<int> &rpn) {
	if (rpn.size() < 2)
		return false;
	rpn[rpn.size() - 2] += rpn.back();
	rpn.pop_back();
	return true;
}

bool subtract(std::vector<int> &rpn) {
	if (rpn.size() < 2)
		return false;
	rpn[rpn.size() - 2] -= rpn.back();
	rpn.pop_back();
	return true;
}

bool divide(std::vector<int> &rpn) {
	if (rpn.size() < 2)
		return false;
	if (rpn.back() == 0)
		return false;
	rpn[rpn.size() - 2] /= rpn.back();
	rpn.pop_back();
	return true;
}

bool multiply(std::vector<int> &rpn) {
	if (rpn.size() < 2)
		return false;
	rpn[rpn.size() - 2] *= rpn.back();
	rpn.pop_back();
	return true;
}

bool check_sign(std::vector<int> &rpn, std::string tmp) {
	if (tmp == "+") {
		if (add(rpn))
			return true;
	}
	if (tmp == "-") {
		if (subtract(rpn))
			return true;
	}
	if (tmp == "/") {
		if (divide(rpn))
			return true;
	}
	if (tmp == "*") {
		if (multiply(rpn))
			return true;
	}
	for (size_t i = 0; tmp[i]; i++) {
		if (!isspace(tmp[i]))
			return false;
	}
	return true;
}

bool check_decimal(std::string str) {
	for (size_t i = 0; i < str.length(); i++) {
		if (!isdigit(str[i]) && str[i] != '-' && !isspace(str[i]) && str[i] != '+')
			return false;
	}
	return true;
}

void calc(std::string str) {
	std::vector<int> rpn;
	std::string tmp;
	int insert;
	std::string::size_type pos1;
	std::string::size_type pos2;
	size_t i = 0;

	while (str[i]) {
		while (isspace(str[i]) && str[i])
			i++;
		pos1 = i;
		while (!isspace(str[i]) && str[i])
			i++;
		pos2 = i;
		tmp = str.substr(pos1, pos2 - pos1);
		std::stringstream ss(tmp);
		ss >> insert;
		if (ss.fail()) {
			if (!check_sign(rpn, tmp)) {
				std::cout << "Error" << std::endl;
				return ;
			}
		} else if (insert >= 10 || !check_decimal(tmp)) {
			std::cout << "Error" << std::endl;
			return ;
		} else
			rpn.push_back(insert);
		if (str[i])
			i++;
	}
	if (rpn.size() != 1)
		std::cout << "Error" << std::endl;
	else
		std::cout << rpn[0] << std::endl;
}

bool is_arithmetic(char c) {
	if (c == '+' || c == '-' || c == '/' || c == '*')
		return true;
	return false;
}