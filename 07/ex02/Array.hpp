#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <string>
#include <exception>

template<class T>
class Array {
	private:
		T *_array;
		size_t _size;
	public:
		Array();
		Array(unsigned int n);
		Array(Array<T> const &A);
		~Array();
		Array<T> &operator=(const Array<T> &A);
		size_t size() const;
		T &operator[](size_t index);
};

#endif