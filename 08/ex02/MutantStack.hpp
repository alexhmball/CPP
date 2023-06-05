#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>
#include <deque>
#include <algorithm>
#include <iostream>

template <class T, class Container = std::deque<T> >
class MutantStack {
	typedef typename Container::size_type size_type;
	typedef typename Container::value_type value_type;
	protected:
		Container c;
	public:
		MutantStack( );
		MutantStack( const MutantStack<T> &MS );
		~MutantStack( );
		MutantStack<T> &operator=( const MutantStack<T> &MS );
		T &top( void );
		const T &top( void ) const;
		bool empty( void ) const;
		size_type size( void ) const;
		void push(const value_type &value);
		void pop( void );

};

#endif