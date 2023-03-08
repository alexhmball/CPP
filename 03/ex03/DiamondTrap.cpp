#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() {
	std::cout << "DiamondTrap default constructor called" << std::endl;
	this->name = "DiamondTrap";
	this->hitPoints = FragTrap::hitPoints;
	this->energyPoints = ScavTrap::energyPoints;
	this->attackDamage = FragTrap::attackDamage;
}

DiamondTrap::DiamondTrap(std::string name) {
	std::cout << "DiamondTrap constructor called" << std::endl;
	this->name = name;
	this->hitPoints = FragTrap::hitPoints;
	this->energyPoints = ScavTrap::energyPoints;
	this->attackDamage = FragTrap::attackDamage;
}

DiamondTrap::DiamondTrap(const DiamondTrap &dia) {
	std::cout << "DiamondTap copy constructor called" << std::endl;
	*this = dia;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &dia) {
	std::cout << "DiamondTrap assignment operator called" << std::endl;
	this->name = dia.name;
	this->hitPoints = dia.hitPoints;
	this->attackDamage = dia.attackDamage;
	this->energyPoints = dia.energyPoints;
	return *this;
}

DiamondTrap::~DiamondTrap() {
	std::cout << "DiamondTrap deconstructor called" << std::endl;
}

void DiamondTrap::whoAmI() {
	std::cout << "I am " << this->name << std::endl;
}