#ifndef WRONGANIMAL
#define WRONGANIMAL

#include <iostream>
#include <string>

class WrongAnimal {
	protected:
		std::string type;
	public:
		WrongAnimal();
		WrongAnimal(const WrongAnimal &WA);
		~WrongAnimal();
		WrongAnimal &operator=(const WrongAnimal &WA);
		void makeSound() const;
		std::string getType() const;
};

#endif