#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main() {
const Animal* snoop = new Dog();
const Animal* doja = new Cat();
Animal *arr[10];
Animal test;

Dog *test1 = new Dog();
Dog *test2 = new Dog();

test1 = test2;

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
return 0;
}