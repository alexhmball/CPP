#include "Span.hpp"

Span::Span( ) : N(0), index(0) {
	std::cout << "span Default constructor called\n";
	arr = new int;
}

Span::Span( unsigned int N ) : N(N), index(0) {
	std::cout << "Span constructor called\n";
	arr = new int[N];
}

Span::Span( const Span &S ) : N(S.getN()), index(S.getIndex()) {
	std::cout << "copy constructor called\n";
	if (this != &S)
	{
		// add all the nums at once with last function
	}
}

Span::~Span() {
	std::cout << "Span deconstructor called\n";
	delete[] arr;
}

Span &Span::operator=(const Span &S) {
	std::cout << "copy assignment operator called\n";
	if (this != &S)
	{
		// last function used here when it's coded
	}
	return (*this);
}

int Span::getIndex( void ) const {
	return index;
}

unsigned int Span::getN( void ) const {
	return N;
}

void Span::addNumber( int num ) {
	try {
		if (index >= N)
			throw std::out_of_range("Span is full\n");
		arr[index] = num;
		index++;
	}
	catch (std::exception &e)
	{
		std::cerr << "exception caught: " << e.what();
	}
}