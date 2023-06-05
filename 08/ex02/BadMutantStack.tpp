#include "BadMutantStack.hpp"

template<class T, class Container>
BadMutantStack<T, Container>::BadMutantStack( void ) {

}

template<class T, class Container>
BadMutantStack<T, Container>::BadMutantStack( const BadMutantStack<T> &MS ) {
	this = MS;
}

template<class T, class Container>
BadMutantStack<T, Container>::~BadMutantStack( void ) {

}

template<class T, class Container>
BadMutantStack<T> &BadMutantStack<T, Container>::operator=(const BadMutantStack<T> &MS ) {
	if (*this != MS)
		this->c = MS.c;
	return *this;
}

template<class T, class Container>
T &BadMutantStack<T, Container>::top( void ) {
	return c.back();
}

template<class T, class Container>
const T &BadMutantStack<T, Container>::top( void ) const {
	return c.back();
}

template<class T, class Container>
bool BadMutantStack<T, Container>::empty( void ) const {
	return c.empty();
}

template<class T, class Container>
typename Container::size_type BadMutantStack<T, Container>::size( void ) const {
	return c.size();
}

template<class T, class Container>
void BadMutantStack<T, Container>::push( const value_type &value) {
	c.push_back(value);
}

template<class T, class Container>
void BadMutantStack<T, Container>::pop( void ) {
	c.pop_back();
}

template<class T, class Container>
typename Container::iterator BadMutantStack<T, Container>::begin( void ) {
	return c.begin();
}

template<class T, class Container>
typename Container::const_iterator BadMutantStack<T, Container>::begin( void ) const {
	return c.begin();
}

template<class T, class Container>
typename Container::iterator BadMutantStack<T, Container>::end( void ) {
	return c.end();
}

template<class T, class Container>
typename Container::const_iterator BadMutantStack<T, Container>::end( void ) const {
	return c.end();
}

template<class T, class Container>
typename Container::reverse_iterator BadMutantStack<T, Container>::rbegin( void ) {
	return c.rbegin();
}

template<class T, class Container>
typename Container::const_reverse_iterator BadMutantStack<T, Container>::rbegin( void ) const {
	return c.rbegin();
}

template<class T, class Container>
typename Container::reverse_iterator BadMutantStack<T, Container>::rend( void ) {
	return c.rend();
}

template<class T, class Container>
typename Container::const_reverse_iterator BadMutantStack<T, Container>::rend( void ) const {
	return c.rend();
}