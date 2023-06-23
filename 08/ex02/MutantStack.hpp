#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>
#include <iostream>
#include <iterator>

template <class T>
class MutantStack : public std::stack<T> {
	public:
		typedef typename std::stack<T>::container_type container;
		typedef typename container::iterator iterator;
		typedef typename container::reverse_iterator reverse_iterator;
		typedef typename container::const_iterator const_iterator;
		typedef typename container::const_reverse_iterator const_reverse_iterator;
		MutantStack( );
		MutantStack( const MutantStack<T> &MS );
		~MutantStack( );
		MutantStack<T> &operator=( const MutantStack<T> &MS );
		iterator begin( void );
		const_iterator begin( void ) const;
		iterator end( void );
		const_iterator end( void ) const;
		reverse_iterator rbegin( void);
		const_reverse_iterator rbegin( void ) const;
		reverse_iterator rend( void );
		const_reverse_iterator rend( void ) const;
};

#endif