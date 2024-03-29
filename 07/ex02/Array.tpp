#include "Array.hpp"

template<typename T>
Array<T>::Array() : _array(NULL), _size(0) {
	std::cout << "Default constructor called" << std::endl;
}

template<typename T>
Array<T>::Array(unsigned int n) {
	std::cout << "Parametric constructor called" << std::endl;
	this->_array = new T[n];
	this->_size = n;
}

template<typename T>
Array<T>::Array(Array const &A) {
	std::cout << "Copy constructor called" << std::endl;
	this->_array = new T[A._size];
	this->_size = A._size;
	for (size_t i = 0; i < this->_size; i++)
		this->_array[i] = A._array[i];
}

template<typename T>
Array<T>::~Array() {
	std::cout << "Destructor called" << std::endl;
	delete [] this->_array;
}

template<typename T>
Array<T> &Array<T>::operator=(const Array<T> &A) {
	std::cout << "assignment operator called" << std::endl;
	if (this != &A) {
		delete [] this->_array;
		this->_array = new T[A._size];
		this->_size = A._size;
		for (size_t i = 0; i < this->_size; i++)
			this->_array[i] = A._array[i];
	}
	return *this;
}

template<typename T>
size_t Array<T>::size() const {
	return this->_size;
}

template<typename T>
T &Array<T>::operator[](size_t index) {
	if (index >= this->_size)
		throw std::out_of_range("Exception caught, Index out of range");
	return this->_array[index];
}
