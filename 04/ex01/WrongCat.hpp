#ifndef WRONGCAT
#define WRONGCAT

#include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal {
	public:
		WrongCat();
		WrongCat(const WrongCat &WC);
		~WrongCat();
		WrongCat &operator=(const WrongCat &WC);
		void makeSound() const;
		std::string getType() const;
};

#endif