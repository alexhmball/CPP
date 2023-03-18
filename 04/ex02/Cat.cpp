#include "Cat.hpp"

Cat::Cat() {
	std::cout << "Cat default constructor called\n";
	type = "Cat";
	brain = new Brain;
}

Cat::Cat(const Cat &A) : UnAnimal(A) {
	std::cout << "Cat copy constructor called\n";
	type = A.type;
	brain = new Brain(*A.brain);
}

Cat::~Cat() {
	std::cout << "Cat deconstructor called\n";
	delete brain;
}

Cat &Cat::operator=(const Cat &A) {
	std::cout << "Animal copy assignment operator called\n";
	if (this != &A)
	{
		type = A.type;
		delete brain;
		brain = new Brain(*A.brain);
	}
	return *this;
}

std::string Cat::getType() const {
	return type;
}

void Cat::makeSound() const {
	std::cout << "~CAT NOISES~\n";
}

void Cat::insertThought(std::string idea) {
	brain->insertIdea(idea);
}

void Cat::printThoughts() const {
	brain->printIdeas();
}