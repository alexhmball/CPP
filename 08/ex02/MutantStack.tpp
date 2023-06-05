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

template<class T, class Container>
typename Container::iterator MutantStack<T, Container>::begin( void ) {
	return c.begin();
}

template<class T, class Container>
typename Container::const_iterator MutantStack<T, Container>::begin( void ) const {
	return c.begin();
}

template<class T, class Container>
typename Container::iterator MutantStack<T, Container>::end( void ) {
	return c.end();
}

template<class T, class Container>
typename Container::const_iterator MutantStack<T, Container>::end( void ) const {
	return c.end();
}

template<class T, class Container>
typename Container::reverse_iterator MutantStack<T, Container>::rbegin( void ) {
	return c.rbegin();
}

template<class T, class Container>
typename Container::const_reverse_iterator MutantStack<T, Container>::rbegin( void ) const {
	return c.rbegin();
}

template<class T, class Container>
typename Container::reverse_iterator MutantStack<T, Container>::rend( void ) {
	return c.rend();
}

template<class T, class Container>
typename Container::const_reverse_iterator MutantStack<T, Container>::rend( void ) const {
	return c.rend();
}