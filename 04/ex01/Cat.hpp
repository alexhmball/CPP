#ifndef CAT
#define CAT

#include "Animal.hpp"
#include "Brain.hpp"

class Cat: public Animal {
	private:
		Brain *brain;
	public:
		Cat();
		Cat(const Cat &C);
		~Cat();
		Cat &operator=(const Cat &C);
		void makeSound() const;
		std::string getType() const;
};

#endif