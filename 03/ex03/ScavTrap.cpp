#include "ScavTrap.hpp"


ScavTrap::ScavTrap() {
	std::cout << "ScavTrap default constructor called" << std::endl;
	this->name = "ScavTrap";
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
}

ScavTrap::ScavTrap(std::string name) {
	std::cout << "ScavTrap constructor called" << std::endl;
	this->name = name;
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap deconstructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &scav) {
	std::cout << "ScavTrap copy constructor called" << std::endl;
	*this = scav;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &scav) {
	std::cout << "ScavTrap assignment operator called" << std::endl;
	this->name = scav.name;
	this->hitPoints = scav.hitPoints;
	this->energyPoints = scav.energyPoints;
	this->attackDamage = scav.attackDamage;
	return *this;
}

void ScavTrap::guardGate() {
	std::cout << "ScavTrap " << this->name << " is guarding the gate" << std::endl;
}

void ScavTrap::attack(std::string const &target) {
	if (this->energyPoints && this->hitPoints)
	{
		this->energyPoints--;
		std::cout << "ScavTrap " << this->name << " attacks " << target << " and deals " << attackDamage << " damage." << std::endl;
	}
	else if (this->energyPoints <= 0)
		std::cout << "ScavTrap " << this->name << " has no energy left!" << std::endl;
	else if (this->hitPoints <= 0)
		std::cout << "ScavTrap " << this ->name << " is dead, cannot attack!" << std::endl;
}