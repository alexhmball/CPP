#ifndef DOG
#define DOG

#include "Animal.hpp"
#include "Brain.hpp"

class Dog: public Animal {
	private:
		Brain *brain;
	public:
		Dog();
		Dog(const Dog &C);
		~Dog();
		Dog &operator=(const Dog &C);
		void makeSound() const;
		std::string getType() const;
		void insertThought(std::string idea);
		void printThoughts() const;
};

#endif