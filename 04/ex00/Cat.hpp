#ifndef CAT
#define CAT

#include "Animal.hpp"

class Cat: public Animal {
	public:
		Cat();
		Cat(const Cat &C);
		~Cat();
		Cat &operator=(const Cat &C);
		void makeSound() const;
		std::string getType() const;
};

#endif