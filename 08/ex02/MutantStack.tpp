#include "MutantStack.hpp"

template<class T>
MutantStack<T>::MutantStack( void ) {

}

template<class T>
MutantStack<T>::MutantStack( const MutantStack<T> &MS ) {
	this = MS;
}

template<class T>
MutantStack<T>::~MutantStack( void ) {

}

template<class T>
MutantStack<T> &MutantStack<T>::operator=(const MutantStack<T> &MS ) {
	if (*this != MS)
		this->c = MS.c;
	return *this;
}

template<class T>
typename MutantStack<T>::iterator MutantStack<T>::begin( void ) {
	return this->c.begin();
}

template<class T>
typename MutantStack<T>::const_iterator MutantStack<T>::begin( void ) const {
	return this->c.begin();
}

template<class T>
typename MutantStack<T>::iterator MutantStack<T>::end( void ) {
	return this->c.end();
}

template<class T>
typename MutantStack<T>::const_iterator MutantStack<T>::end( void ) const {
	return this->c.end();
}

template<class T>
typename MutantStack<T>::reverse_iterator MutantStack<T>::rbegin( void ) {
	return this->c.rbegin();
}

template<class T>
typename MutantStack<T>::const_reverse_iterator MutantStack<T>::rbegin( void ) const {
	return this->c.rbegin();
}

template<class T>
typename MutantStack<T>::reverse_iterator MutantStack<T>::rend( void ) {
	return this->c.rend();
}

template<class T>
typename MutantStack<T>::const_reverse_iterator MutantStack<T>::rend( void ) const {
	return this->c.rend();
}