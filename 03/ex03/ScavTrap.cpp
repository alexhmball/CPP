#include "ScavTrap.hpp"

ScavTrap::ScavTrap() {
	std::cout << "ScavTrap default constructor called\n";
	name = "ScavTrap";
	hitPoints = 100;
	energyPoints = 50;
	attackDamage = 20;
}

ScavTrap::ScavTrap(std::string name) {
	std::cout << "ScavTrap constructor called\n";
	this->name = name;
	hitPoints = 100;
	energyPoints = 50;
	attackDamage = 20;
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap deconstructor called\n";
}

ScavTrap::ScavTrap(const ScavTrap &scav) {
	std::cout << "ScavTrap copy constructor called\n";
	*this = scav;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &scav) {
	std::cout << "ScavTrap assignment operator called\n";
	name = scav.name;
	hitPoints = scav.hitPoints;
	energyPoints = scav.energyPoints;
	attackDamage = scav.attackDamage;
	return *this;
}

void ScavTrap::guardGate() {
	std::cout << "ScavTrap " << name << " is guarding the gate\n";
}

void ScavTrap::attack(std::string const &target) {
	if (energyPoints && hitPoints)
	{
		energyPoints--;
		std::cout << "ScavTrap " << name << " attacks " << target << " and deals " << attackDamage << " damage.\n";
	}
	else if (energyPoints <= 0)
		std::cout << "ScavTrap" << name << " has no energy left!\n";
	else if (hitPoints <= 0)
		std::cout << "ScavTrap" << name << " is dead, cannot attack!\n";
}