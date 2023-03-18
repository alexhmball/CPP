#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main() {
const Animal* meta = new Animal();
const Animal* snoop = new Dog();
const Animal* doja = new Cat();
Dog snoopy;
Dog nate(snoopy);

std::cout << "\n";
std::cout << snoop->getType() << " \n";
std::cout << snoopy.getType() << " \n";
std::cout << nate.getType() << " \n";
std::cout << doja->getType() << " \n";
std::cout << meta->getType() << " \n\n";

snoop->makeSound();
snoopy.makeSound();
nate.makeSound();
doja->makeSound();
meta->makeSound();

std::cout << "\n";

delete meta;
delete snoop;
delete doja;

std::cout << "\n\n";

const WrongAnimal* wrongA = new WrongAnimal();
const WrongAnimal* WrongDoja = new WrongCat();
WrongCat kate;
WrongCat kelly(kate);

std::cout << "\n";
std::cout << WrongDoja->getType() << " \n";
std::cout << kate.getType() << " \n";
std::cout << kelly.getType() << " \n";
std::cout << wrongA->getType() << " \n";

kate.makeSound();
kelly.makeSound();
WrongDoja->makeSound();
wrongA->makeSound();

std::cout << "\n";

delete wrongA;
delete WrongDoja;
return 0;
}