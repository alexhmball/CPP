#include "FragTrap.hpp"

FragTrap::FragTrap () {
	std::cout << "FragTrap default constructor called" << std::endl;
	this->name = "FragTrap";
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;
}

FragTrap::FragTrap(std::string name) {
	std::cout << "FragTrap constructor called" << std::endl;
	this->name = name;
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;
}

FragTrap::FragTrap(const FragTrap &frag) {
	std::cout << "FragTrap copy constructor called" << std::endl;
	*this = frag;
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap deconstructor called" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &frag) {
	std::cout << "FragTrap copy assignment operator called" << std::endl;
	this->name = frag.name;
	this->hitPoints = frag.hitPoints;
	this->energyPoints = frag.energyPoints;
	this->attackDamage = frag.attackDamage;
	return *this;
}

void FragTrap::highFiveGuys(void) {
	std::cout << "FragTrap " << this->name << ": \"High five guys!\"" << std::endl;
}