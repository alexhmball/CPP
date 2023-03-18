#include "Dog.hpp"

Dog::Dog() {
	std::cout << "Dog default constructor called\n";
	type = "Dog";
}

Dog::Dog(const Dog &A) : Animal(A) {
	std::cout << "Dog copy constructor called\n";
	*this = A;
}

Dog::~Dog() {
	std::cout << "Dog deconstructor called\n";
}

Dog &Dog::operator=(const Dog &A) {
	std::cout << "Dog copy constructor called\n";
	type = A.type;
	return *this;
}

std::string Dog::getType() const {
	return type;
}

void Dog::makeSound() const {
	std::cout << "~DOG NOISES~\n";
}