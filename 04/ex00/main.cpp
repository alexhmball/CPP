#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
const Animal* meta = new Animal();
const Animal* j = new Dog();
const Animal* i = new Cat();
std::cout << j->getType() << " \n";
std::cout << i->getType() << " \n";
i->makeSound(); //will output the cat sound!
j->makeSound();
meta->makeSound();
return 0;
}