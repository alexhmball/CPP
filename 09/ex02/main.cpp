#include <deque>
#include <set>
// #include <multimap>
#include <utility>
#include <sstream>
#include <iostream>

int main( int ac, char **av ) {
	std::deque<size_t> test;
	std::multiset<size_t> check;
	std::multiset<std::pair<size_t, size_t> > sort;
	std::multiset<size_t> sorted;
	size_t num;

	if (ac > 1) {
		for (size_t i = 1; av[i]; i++) {
			std::stringstream ss(av[i]);

			ss >> num;
			if (!ss.fail() && av[i][0] != '-') {
				test.push_back(num);
				check.insert(num);
			} else {
				std::cout << "Error" <<std::endl;
				return 1;
			}
		}
		while ( test.size() > 0 ) {
			if (test.size() == 1)
				break ;
			if (test.back() > test.front()) {
				sort.insert(std::pair<size_t, size_t>(test.back(), test.front()));
			} else if (test.front() > test.back()) {
				sort.insert(std::pair<size_t, size_t>(test.front(), test.back()));
			}
			test.pop_back();
			test.pop_front();
		}
		for (std::set<std::pair<size_t, size_t> >::iterator it = sort.begin(); it != sort.end(); it++) {
			if (test.size() == 1) {
				sorted.insert(test.front());
				test.pop_back();
			}
			sorted.insert((*it).second);
			sorted.insert((*it).first);
		}
		// for (size_t i = 0; i < test.size(); i++) {
		// 	std::cout << test[i] << " ";
		// }
		// std::cout << std::endl;
		// for (size_t i = 0; i < sort.size(); i++) {
		// 	std::set<std::pair<size_t, size_t> >::iterator it = check.find(test[i]);
		// 	std::cout << (*it).first << " ";
		// }
		std::cout << std::endl;
		for (std::set<size_t>::iterator it = sorted.begin(); it != sorted.end(); it++) {
			std::cout << *it << " ";
		}
		std::cout << std::endl;
	}
}