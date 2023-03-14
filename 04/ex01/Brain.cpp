#include "Brain.hpp"

Brain::Brain() {
	std::cout << "Brain default constructor called\n";
}

Brain::Brain(const Brain &B) {
	std::cout << "Brain copy constructor called\n";
	*this = B;
}

Brain &Brain::operator=(const Brain &B) {
	std::cout << "Brain copy assignment operator called\n";
	for (int i = 0; i < 100; i++)
		ideas[i] = B.ideas[i];
	return *this;
}

Brain::~Brain() {
	std::cout << "Brain deconstructor called\n";
}