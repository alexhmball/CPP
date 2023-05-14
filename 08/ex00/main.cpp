#include "easyfind.hpp"
#include <string>
#include <vector>
#include <list>
#include <iostream>

int main(void) {
	std::string str = "Hello World!";
	std::vector<int> arr;
	std::list<int> lst;
	for (int i = 0; i < 5; i++)
		arr.push_back(i);
	for (int i = 0; i < 5; i++)
		lst.push_back(i);
	try {
		std::cout << "easyfind(str, 'W'): " << *easyfind(str, 'W') << std::endl;
		std::cout << "easyfind(str, 'w'): " << *easyfind(str, 'w') << std::endl;
	}
	catch (std::exception &e) {
		std::cout << "Exception: " << e.what() << std::endl;
	}
	try {
		std::cout << "easyfind(arr, 3): " << *easyfind(arr, 3) << std::endl;
		std::cout << "easyfind(arr, 6): " << *easyfind(arr, 6) << std::endl;
	}
	catch (std::exception &e) {
		std::cout << "Exception: " << e.what() << std::endl;
	}
	try {
		std::cout << "easyfind(lst, 3): " << *easyfind(lst, 3) << std::endl;
		std::cout << "easyfind(lst, 6): " << *easyfind(lst, 6) << std::endl;
	}
	catch (std::exception &e) {
		std::cout << "Exception: " << e.what() << std::endl;
	}
	return 0;
}