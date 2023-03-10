#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() {
	std::cout << "DiamondTrap default constructor called" << std::endl;
	this->name = "DiamondTrap";
	ClapTrap::name = name + "_clap_name";
	hitPoints = FragTrap::hitPoints;
	energyPoints = ScavTrap::energyPoints;
	attackDamage = FragTrap::attackDamage;
}

DiamondTrap::DiamondTrap(std::string name) {
	std::cout << "DiamondTrap constructor called" << std::endl;
	this->name = name;
	ClapTrap::name = name + "_clap_name";
	hitPoints = FragTrap::hitPoints;
	energyPoints = ScavTrap::energyPoints;
	attackDamage = FragTrap::attackDamage;
}

DiamondTrap::DiamondTrap(const DiamondTrap &dia) {
	std::cout << "DiamondTap copy constructor called" << std::endl;
	*this = dia;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &dia) {
	std::cout << "DiamondTrap assignment operator called" << std::endl;
	name = dia.name;
	ClapTrap::name = dia.ClapTrap::name;
	hitPoints = dia.hitPoints;
	attackDamage = dia.attackDamage;
	energyPoints = dia.energyPoints;
	return *this;
}

DiamondTrap::~DiamondTrap() {
	std::cout << "DiamondTrap deconstructor called" << std::endl;
}

void DiamondTrap::whoAmI() {
	std::cout << "DiamondTrap Real name: " << this->name  << "  ClapTrap name: " << ClapTrap::name << std::endl;
}
