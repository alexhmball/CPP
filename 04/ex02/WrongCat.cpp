#include "WrongCat.hpp"

WrongCat::WrongCat() {
	std::cout << "WrongCat default constructor called\n";
	type = "Wrong Cat";
}

WrongCat::WrongCat(const WrongCat &WC) : WrongAnimal(WC) {
	std::cout << "WrongCat copy constructor called\n";
	*this = WC;
}

WrongCat::~WrongCat() {
	std::cout << "WrongCat deconstructor called\n";
}

WrongCat &WrongCat::operator=(const WrongCat &WC) {
	std::cout << "WrongCat copy assignment operator called\n";
	type = WC.type;
	return *this;
}

void WrongCat::makeSound() const {
	std::cout << "~WRONG CAT NOISES~\n";
}

std::string WrongCat::getType() const {
	return type;
}