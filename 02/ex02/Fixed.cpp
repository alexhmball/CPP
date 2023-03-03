#include "Fixed.hpp"
#include <iostream>
#include <cmath>

Fixed::Fixed(){
	std::cout << "default constructor called" << std::endl;
	value = 0;
}

Fixed::Fixed(const int value) {
	this->value = value << bits;
}

Fixed::Fixed(const float value) {
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

int Fixed::operator>(const Fixed &F){
	return this->value > F.value;
}

int Fixed::operator<(const Fixed &F){
	return this->value < F.value;
}

int Fixed::operator>=(const Fixed &F){
	return this->value >= F.value;
}

int Fixed::operator<=(const Fixed &F){
	return this->value <= F.value;
}

int Fixed::operator==(const Fixed &F){
	return this->value == F.value;
}

int Fixed::operator!=(const Fixed &F){
	return this->value != F.value;
}

Fixed& Fixed::operator=(const Fixed &F) {
	std::cout << "copy assignment operator called" << std::endl;
	if (&F != this)
		this->value = F.value;
	return *this;
}

Fixed& Fixed::operator+(const Fixed &F) {
	Fixed *tmp = new Fixed();
	tmp->value = this->value + F.value;
	return *tmp;
}

Fixed& Fixed::operator-(const Fixed &F) {
	Fixed *tmp = new Fixed();
	tmp->value = this->value - F.value;
	return *tmp;
}

Fixed& Fixed::operator*(const Fixed &F) {
	Fixed *tmp = new Fixed();
	tmp->value = this->value * F.value;
	return *tmp;
}

Fixed& Fixed::operator/(const Fixed &F) {
	Fixed *tmp = new Fixed();
	tmp->value = this->value / F.value;
	return *tmp;
}

Fixed& Fixed::operator++(void) {
	this->value++;
	return *this;
}

Fixed& Fixed::operator--(void) {
	this->value--;
	return *this;
}

Fixed Fixed::operator++(int) {
	this->value++;
	return *this;
}

Fixed Fixed::operator--(int) {
	this->value--;
	return *this;
}

Fixed& Fixed::min(Fixed &a, Fixed &b) {
	if (a.toFloat() < b.toFloat())
		return a;
	return b;
}

const Fixed& Fixed::min(const Fixed &a, const Fixed &b) {
	if (a.toFloat() < b.toFloat())
		return a;
	return b;
}

Fixed& Fixed::max(Fixed &a, Fixed &b) {
	if (a.toFloat() > b.toFloat())
		return a;
	return b;
}

const Fixed& Fixed::max(const Fixed &a, const Fixed &b) {
	if (a.toFloat() > b.toFloat())
		return a;
	return b;
}

float Fixed::toFloat() const {
	return ((float)value / (float)(1 << bits));
}

int Fixed::toInt() const {
	return value >> bits;
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