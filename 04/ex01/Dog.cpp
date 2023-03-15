#include "Dog.hpp"

Dog::Dog() {
	std::cout << "Dog default constructor called\n";
	type = "Dog";
	brain = new Brain;
}

Dog::Dog(const Dog &A) : Animal(A) {
	std::cout << "Dog copy constructor called\n";
	type = A.type;
	brain = new Brain(*A.brain);
}

Dog::~Dog() {
	std::cout << "Dog deconstructor called\n";
	delete brain;
}

Dog &Dog::operator=(const Dog &A) {
	std::cout << "Dog copy constructor called\n";
	if (this != &A)
	{
		type = A.type;
		delete brain;
		brain = new Brain(*A.brain);
	}
	return *this;
}

std::string Dog::getType() const {
	return type;
}

void Dog::makeSound() const {
	std::cout << "~DOG NOISES~\n";
}

void Dog::insertThought(std::string idea) {
	brain->insertIdea(idea);
}

void Dog::printThoughts() const {
	brain->printIdeas();
}