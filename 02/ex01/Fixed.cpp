#include "Fixed.hpp"
#include <iostream>
#include <cmath>

Fixed::Fixed(){
	std::cout << "default constructor called" << std::endl;
	value = 0;
}

Fixed::Fixed(const int value) : value(value) {
	this->value = value * (1 << bits);
}

Fixed::Fixed(const float value) : value(value) {
	std::cout << "float constructor called" << std::endl;
	this->value = roundf(value * (1 << bits));
}

Fixed::Fixed(const Fixed &F){
	std::cout << "copy constructor called" << std::endl;
	*this = F;
}

Fixed::~Fixed(){
	std::cout << "Deconstructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed &F) {
	std::cout << "copy assignment operator called" << std::endl;
	if (&F != this)
		this->value = F.value;
	return *this;
}

float Fixed::toFloat() const {
	return ((float)value / (float)(1 << bits));
}

int Fixed::toInt() const {
	return value / (1 << bits);
}

int Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called" << std::endl;
	return value;
}

void Fixed::setRawBits(int const raw) {
	std::cout << "setRawBits member function called" << std::endl;
	value = raw;
}

std::ostream& operator<<(std::ostream &os, const Fixed &F) {
	return os << F.toFloat();
}