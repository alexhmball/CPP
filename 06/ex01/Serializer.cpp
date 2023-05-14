#include "Serializer.hpp"

Serializer::Serializer() {
	std::cout << "Serializer constructor called\n";
}

Serializer::Serializer(const Serializer &S) {
	std::cout << "Serializer copy constructor called\n";
	*this = S;
}

Serializer::~Serializer() {
	std::cout << "Serialiizer deconstructor called\n";
}

Serializer &Serializer::operator=(const Serializer &S) {
	std::cout << "copy assignment operator called\n";
	(void)S;
	return *this;
}

uintptr_t Serializer::serialize(Data *ptr) {
	return reinterpret_cast<uintptr_t>(ptr);
}

Data *Serializer::deserialize(uintptr_t raw) {
	return reinterpret_cast<Data *>(raw);
}