#include "Test.hpp"

Test::Test( ) : x(0) {
	// std::cout << "Test default constructor called\n";
}

Test::Test( int x ): x(x) {
	// std::cout << "Test parameterized constructor called\n";
}

Test::Test(const Test &T) : x(T.getNum()) {
	// std::cout << "Test copy constructor called\n";
}

Test::~Test( ) {
	// std::cout << "Test deconstructor\n";
}

Test &Test::operator=( const Test &T ) {
	// std::cout << "Test assignment operator called\n";
	this->x = T.getNum();
	return (*this);
}

int Test::getNum( void ) const {
	return x;
}

bool Test::operator<( const Test &T ) {
	return (this->x < T.getNum());
}

bool Test::operator>( const Test &T ) {
	return (this->x > T.getNum());
}

std::ostream& operator<<(std::ostream &os, const Test &T) {
	(void)os;
	std::cout << T.getNum();
	return (os);
}