#include "Animal.hpp"

Animal::Animal(): type("ANIMAL") {
	std::cout << "Animal default constructor called\n";
}

Animal::Animal(const Animal &A) {
	std::cout << "Animal copy constructor called\n";
	*this = A;
}

Animal::~Animal() {
	std::cout << "Animal deconstructor called\n";
}

Animal &Animal::operator=(const Animal &A) {
	std::cout << "Animal copy constructor called\n";
	type = A.type;
	return *this;
}

std::string Animal::getType() const{
	return type;
}

void Animal::makeSound() const {
	std::cout << "~ANIMAL NOISES~\n";
}