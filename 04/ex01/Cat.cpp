#include "Cat.hpp"

Cat::Cat() {
	std::cout << "Cat default constructor called\n";
	type = "Cat";
	brain = new Brain;
}

Cat::Cat(const Cat &A) : Animal(A) {
	std::cout << "Cat copy constructor called\n";
	*this = A;
}

Cat::~Cat() {
	std::cout << "Cat deconstructor called\n";
	delete brain;
}

Cat &Cat::operator=(const Cat &A) {
	std::cout << "Animal copy constructor called\n";
	type = A.type;
	return *this;
}

std::string Cat::getType() const {
	return type;
}

void Cat::makeSound() const {
	std::cout << "~CAT NOISES~\n";
}