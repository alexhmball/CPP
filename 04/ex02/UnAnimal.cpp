#include "UnAnimal.hpp"

UnAnimal::UnAnimal(): type("UnAnimal") {
	std::cout << "UnAnimal default constructor called\n";
}

UnAnimal::UnAnimal(const UnAnimal &A) {
	std::cout << "UnAnimal copy constructor called\n";
	*this = A;
}

UnAnimal::~UnAnimal() {
	std::cout << "UnAnimal deconstructor called\n";
}

UnAnimal &UnAnimal::operator=(const UnAnimal &A) {
	std::cout << "UnAnimal copy constructor called\n";
	type = A.type;
	return *this;
}

std::string UnAnimal::getType() const {
	return type;
}

void UnAnimal::makeSound() const {
	std::cout << "~UnAnimal NOISES~\n";
}