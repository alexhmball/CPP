#include "Span.hpp"

Span::Span( ) : N(0), index(0) {
	std::cout << "span Default constructor called\n";
}

Span::Span( unsigned int N ) : N(N), index(0){
	std::cout << "Span constructor called\n";
	arr.resize(N);
}

Span::Span( const Span &S ) : N(S.getN()), index(S.getIndex()) {
	std::cout << "copy constructor called\n";
	if (this != &S)
	{
		this->arr.resize(S.getN());
		this->arr = S.arr;
	}
}

Span::~Span() {
	std::cout << "Span deconstructor called\n";
}

Span &Span::operator=(const Span &S) {
	std::cout << "copy assignment operator called\n";
	if (this != &S)
	{
		this->arr.resize(S.getN());
		this->arr = S.arr;
		this->N = S.N;
		this->index = S.index;
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
	catch (std::exception &e) {
		std::cerr << "exception caught: " << e.what();
	}
}

int Span::longestSpan( void ) {
	try {
		if (N < 2 || index < 2)
			throw std::out_of_range("not enough elements to find a span\n");
		std::vector<int>::iterator max = std::max_element(arr.begin(), arr.end());
		std::vector<int>::iterator min = std::min_element(arr.begin(), arr.end());
		return *max - *min;
	}
	catch (std::exception &e){
		std::cerr << "Exception caught: " << e.what();
	}
	return 0;
}

int Span::shortestSpan( void ) {
	try {
		if (N < 2 || index < 2)
			throw std::out_of_range("not enough elements to find a span\n");
		std::vector<int> temp = arr;
		std::vector<int>::iterator it = temp.begin() + index;
		std::sort(temp.begin(), it);
		int span = INT_MAX;
		for (size_t i = 0; i < index - 1; i++)
		{
			if (temp[i + 1] - temp[i] < span)
				span = temp[i + 1] - temp[i];
		}
		return span;
	}
	catch (std::exception &e){
		std::cerr << "Exception caught: " << e.what();
	}
	return 0;
}

void Span::addRange(std::vector<int>::iterator it1, std::vector<int>::iterator it2) {
	try {
		if (index >= N)
			throw std::out_of_range("span is already full");
		while (it1 < it2)
		{
			if (index >= N)
				throw std::out_of_range("span is full");
			arr[index] = *it1;
			index++;
			it1++;
		}
	}
	catch (std::exception &e) {
		std::cerr << "exception caught: " << e.what() << " ,stoping insertion.\n";
	}
}