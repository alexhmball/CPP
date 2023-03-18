#ifndef ANIMAL
#define ANIMAL

#include <iostream>
#include <string>

class Animal {
	protected:
		std::string type;
	public:
		Animal();
		Animal(const Animal &A);
		virtual ~Animal();
		Animal &operator=(const Animal &A);
		virtual void makeSound() const;
		std::string getType() const;
};

#endif
