#include "Fixed.hpp"
#include <iostream>

int main( void ) {
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;

	Fixed c;
	Fixed d;


	c.setRawBits(0);
	d.setRawBits(0);
	std::cout << ++c << std::endl;
	std::cout << --d << std::endl;

	std::cout << --c << std::endl;
	std::cout << ++d << std::endl;

	std::cout << c + 8.9f << std::endl;
	std::cout << d - 5 << std::endl;

	std::cout << c++ << std::endl;
	std::cout << d-- << std::endl;

	std::cout << c.max(c, d) << std::endl;
	std::cout << d.min(c, d) << std::endl;

	c = -999999;

	std::cout << c << std::endl;
	std::cout << ++c << std::endl;
	std::cout << ++c << std::endl;

	c.setRawBits(955999799);
	std::cout << c << std::endl;
	std::cout << ++c << std::endl;
	std::cout << ++c << std::endl;

	return 0;
}