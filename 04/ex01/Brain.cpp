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
	for (int x = 0; x < 100; x++)
		ideas[x] = B.ideas[x];
	this->i = B.i;
	return *this;
}

Brain::~Brain() {
	std::cout << "Brain deconstructor called\n";
}

void Brain::insertIdea(std::string idea) {
	if (i < 100)
	{
		ideas[i] = idea;
		i++;
	}
	else
	{
		ideas[0] = idea;
		i = 1;
	}
}

void Brain::printIdeas() const {
	for (int x = 0; x < 100; x++)
	{
		if (!ideas[x].empty())
			std::cout << ideas[x] << "\n";
	}
}