#include "MutantStack.hpp"

template<class T, class Container>
MutantStack<T, Container>::MutantStack( void ) {

}

template<class T, class Container>
MutantStack<T, Container>::MutantStack( const MutantStack<T> &MS ) {
	this = MS;
}

template<class T, class Container>
MutantStack<T, Container>::~MutantStack( void ) {

}

template<class T, class Container>
MutantStack<T> &MutantStack<T, Container>::operator=(const MutantStack<T> &MS ) {
	if (*this != MS)
		this->c = MS.c;
	return *this;
}

template<class T, class Container>
T &MutantStack<T, Container>::top( void ) {
	return c.back();
}

template<class T, class Container>
const T &MutantStack<T, Container>::top( void ) const {
	return c.back();
}

template<class T, class Container>
bool MutantStack<T, Container>::empty( void ) const {
	return c.empty();
}

template<class T, class Container>
typename Container::size_type MutantStack<T, Container>::size( void ) const {
	return c.size();
}

template<class T, class Container>
void MutantStack<T, Container>::push( const value_type &value) {
	c.push_back(value);
}

template<class T, class Container>
void MutantStack<T, Container>::pop( void ) {
	c.pop_back();
}