#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("WRONG ANIMAL") {
	std::cout << "WrongAnimal default constructor called\n";
}

WrongAnimal::WrongAnimal(const WrongAnimal &WA) {
	std::cout << "WrongAnimal copy constructor called\n";
	*this = WA;
}

WrongAnimal::~WrongAnimal() {
	std::cout << "WrongAnimal deconstructor called\n";
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &WA) {
	std::cout << "WrongAnimal copy assignment operator called\n";
	this->type = WA.type;
	return *this;
}

void WrongAnimal::makeSound() const {
	std::cout << "~WRONG ANIMAL NOISES~\n";
}

std::string WrongAnimal::getType() const {
	return type;
}