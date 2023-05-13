#ifndef SERIALIZER
#define SERIALIZER

#include "Data.hpp"
#include <iostream>
#include <stdint.h>

class Serializer {
	private:
		Serializer();
		Serializer(const Serializer &S);
		~Serializer();
		Serializer &operator=(const Serializer &S);
	public:
		static uintptr_t serialize(Data* ptr);
		static Data* deserialize(uintptr_t raw);
};

#endif