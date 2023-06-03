#include "Serializer.hpp"

int main (void) {
	Data *original = new Data;
	Data *returned;
	// Data *testr;
	uintptr_t temp;

	original->something = 8;
	original->words = "these are words";
	original->c = 'C';
	original->f = 42.42f;
	original->d = 24.24;
	// size_t *test = reinterpret_cast<size_t *>(original);
	// testr = reinterpret_cast<Data *>(test);

	temp = Serializer::serialize(original);
	returned = Serializer::deserialize(temp);
	
	std::cout << "~~~~~ORGINAL~~~~~~\n";
	std::cout << original->something << std::endl;
	std::cout << original->words << std::endl;
	std::cout << original->c << std::endl;
	std::cout << original->f << std::endl;
	std::cout << original->d << std::endl;

	// std::cout << "~~~~~TEST~~~~~~\n";
	// std::cout << *test << std::endl;
	// std::cout << testr->something << std::endl;
	// std::cout << testr->words << std::endl;
	// std::cout << testr->c << std::endl;
	// std::cout << testr->f << std::endl;
	// std::cout << testr->d << std::endl;

	std::cout << "~~~~~RETURNED~~~~~~\n";
	std::cout << returned->something << std::endl;
	std::cout << returned->words << std::endl;
	std::cout << returned->c << std::endl;
	std::cout << returned->f << std::endl;
	std::cout << returned->d << std::endl;

	std::cout << "~~~~~MEMORY~~~~~~\n";
	std::cout << original << std::endl;
	std::cout << returned << std::endl;
	if (original == returned)
		std::cout << "Success!\n";
	delete original;
}