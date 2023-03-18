#ifndef DOG
#define DOG

#include "UnAnimal.hpp"
#include "Brain.hpp"

class Dog: public UnAnimal {
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