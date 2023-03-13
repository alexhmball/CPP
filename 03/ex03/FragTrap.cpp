#include "FragTrap.hpp"

FragTrap::FragTrap () {
	std::cout << "FragTrap default constructor called\n";
	name = "FragTrap";
	hitPoints = 100;
	energyPoints = 100;
	attackDamage = 30;
}

FragTrap::FragTrap(std::string name) {
	std::cout << "FragTrap constructor called\n";
	this->name = name;
	hitPoints = 100;
	energyPoints = 100;
	attackDamage = 30;
}

FragTrap::FragTrap(const FragTrap &frag) {
	std::cout << "FragTrap copy constructor called\n";
	*this = frag;
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap deconstructor called\n";
}

FragTrap &FragTrap::operator=(const FragTrap &frag) {
	std::cout << "FragTrap copy assignment operator called\n";
	name = frag.name;
	hitPoints = frag.hitPoints;
	energyPoints = frag.energyPoints;
	attackDamage = frag.attackDamage;
	return *this;
}

void FragTrap::highFiveGuys(void) {
	std::cout << "FragTrap " << name << ": \"High five guys!\"\n";
}