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

void swap(size_t &a, size_t &b) {
	size_t tmp = a;
	a = b;
	b = tmp;
}

void deque_sort_pair(std::deque<std::pair<size_t, size_t> > &paired, int n, int index = 0) {
	if (index == n)
		return ;
	int k = minIndex(paired, index, n - 1);
	if (k != index)
		swap(paired[k], paired[index]);
}

void deque_pair(std::deque<size_t> arr) {
	std::deque<std::pair<size_t, size_t> > paired;
	size_t extra;
	int flag = 0;
	(void)extra;
	(void)flag;

	for (size_t i = 0; i < arr.size(); i += 2) {
		if (i + 1 == arr.size()) {
			flag = 1;
			extra = arr[i + 1];
			break ;
		}
		if (arr[i] > arr[i + 1])
			paired.push_back(std::pair<size_t, size_t>(arr[i], arr[i + 1]));
		else if (arr[i] < arr[i + 1])
			paired.push_back(std::pair<size_t, size_t>(arr[i + 1], arr[i]));
	}
	for (size_t i = 0; i < paired.size(); i++)
		std::cout << paired[i].first << " " << paired[i].second << " ";
	std::cout << std::endl;
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