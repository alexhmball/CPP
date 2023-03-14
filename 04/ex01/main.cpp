#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main() {
const Animal* j = new Dog();
const Animal* i = new Cat();
Animal *arr[10];

for (int i = 0; i < 10; i++)
{
	if (i % 2 == 0)
	{
		arr[i] = new Cat();
		arr[i]->makeSound();
	}
	else
	{
		arr[i] = new Dog();
		arr[i]->makeSound();
	}
}
delete j;
delete i;
for (int i = 0; i < 10; i++)
	delete arr[i];
return 0;
}