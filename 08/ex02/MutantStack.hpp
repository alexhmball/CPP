#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>
#include <deque>
#include <algorithm>
#include <iostream>

template <class T, class Container = std::deque<T> >
class MutantStack {
	protected:
		Container c;
	public:
	typedef typename Container::size_type size_type;
	typedef typename Container::value_type value_type;
	typedef typename Container::iterator iterator;
	typedef typename Container::reverse_iterator reverse_iterator;
	typedef typename Container::const_iterator const_iterator;
	typedef typename Container::const_reverse_iterator const_reverse_iterator;
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
		iterator begin( void);
		const_iterator begin( void ) const;
		iterator end( void );
		const_iterator end( void ) const;
		reverse_iterator rbegin( void);
		const_reverse_iterator rbegin( void ) const;
		reverse_iterator rend( void );
		const_reverse_iterator rend( void ) const;

};

#endif