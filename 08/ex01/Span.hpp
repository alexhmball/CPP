#ifndef SPAN_HPP
#define SPAN_HPP


#include <iostream>
#include <algorithm>
#include <exception>
#include <vector>
#include <climits>

class Span {
	private:
		unsigned int N;
		unsigned int index;
		std::vector<int> arr;
	public:
		Span( );
		Span( unsigned int N );
		Span( const Span &S );
		~Span();
		Span &operator=( const Span &S );
		unsigned int getN( void ) const;
		int getIndex( void ) const;
		void addNumber( int num );
		int shortestSpan( void );
		int longestSpan( void );
		void addRange(std::vector<int>::iterator it1, std::vector<int>::iterator it2);
};

#endif