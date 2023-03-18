// #include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
// #include "WrongAnimal.hpp"
// #include "WrongCat.hpp"
#include "UnAnimal.hpp"

int main() {
const UnAnimal* snoop = new Dog();
const UnAnimal* doja = new Cat();
// UnAnimal test;
UnAnimal *arr[10];

for (int i = 0; i < 10; i++)
{
	if (i % 2 == 0)
	{
		arr[i] = new Cat();
		arr[i]->makeSound();
		std::cout << "\n";
	}
	else
	{
		arr[i] = new Dog();
		arr[i]->makeSound();
		std::cout << "\n";
	}
}

std::cout << "\n\n";

Dog newDog;

std::cout << "\n\n";

newDog.insertThought("eat cat food");
newDog.printThoughts();

std::cout << "\n\n";

Dog copyDog(newDog);


Dog *a = new Dog();
Dog *b = new Dog();

*b = *a;

b->makeSound();
a->makeSound();


std::cout << "\n\n";

copyDog.printThoughts();

std::cout << "\n\n";

newDog.insertThought("maybe don't eat cat food");

for (int i = 0; i < 101; i++)
	copyDog.insertThought("definitly eat the cat food");

newDog.printThoughts();
std::cout << "\n\n";

copyDog.printThoughts();
std::cout << "\n\n";

delete snoop;
delete doja;
for (int i = 0; i < 10; i++)
	delete arr[i];
delete a;
delete b;
return 0;
}