#ifndef UNAMINAL
#define UNAMINAL

#include <iostream>
#include <string>

class UnAnimal {
	protected:
		std::string type;
	public:
		UnAnimal();
		UnAnimal(const UnAnimal &A);
		virtual ~UnAnimal();
		UnAnimal &operator=(const UnAnimal &A);
		virtual void makeSound() const = 0;
		std::string getType() const;
};

#endif
