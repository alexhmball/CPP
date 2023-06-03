#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>
#include <cctype>

template <typename T> void iter(T *array, size_t length, void (*func)(T &)) {
	for (size_t i = 0; i < length; i++)
		func(array[i]);
}

template <typename T> void print(T &x) {
	std::cout << x << " ";
}

template <typename T> void addOne(T &x) {
	x++;
}

template <typename T> void subOne(T &x) {
	x--;
}

template <typename T> void makebig(T &x) {
	x = toupper(x);
}

#endif