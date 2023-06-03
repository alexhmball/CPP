#ifndef TEST_HPP
# define TEST_HPP

#include <iostream>

class Test {
	private:
		int x;
	public:
		Test( );
		Test( int x );
		Test( const Test &T );
		~Test( );
		Test &operator=( const Test &T );
		bool operator<( const Test &T );
		bool operator>( const Test &T );
		int getNum( void ) const;
};

std::ostream& operator<<( std::ostream &os , const Test &T );

#endif