#include "Fixed.hpp"
#include <iostream>

Fixed::Fixed(){
	std::cout << "default constructor called" << std::endl;
	value = 0;
}

Fixed::Fixed(const Fixed &F){
	std::cout << "copy constructor called" << std::endl;
	this->operator=(F);
}

Fixed::~Fixed(){
	std::cout << "Deconstructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed &F) {
	std::cout << "copy assignment operator called" << std::endl;
	return *this;
}

int Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called" << std::endl;
	return bits;
}

void Fixed::setRawBits(int const raw) {
	std::cout << "setRawBits member function called" << std::endl;
	bits = raw;
}
