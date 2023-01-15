#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : name("ClapTrap"), hitPoints(10), energyPoints(10), attackDamage(0){
	std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : name(name), hitPoints(10), energyPoints(10), attackDamage(0){
	std::cout << "ClapTrap constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &trap) : name(trap.name), hitPoints(trap.hitPoints), energyPoints(trap.energyPoints), attackDamage(trap.attackDamage){
	std::cout << "ClapTrap copy constructor called" << std::endl;
}

ClapTrap::~ClapTrap(){
	std::cout << "ClapTrap destructor called" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &trap){
	std::cout << "ClapTrap assignation operator called" << std::endl;
	this->name = trap.name;
	this->hitPoints = trap.hitPoints;
	this->energyPoints = trap.energyPoints;
	this->attackDamage = trap.attackDamage;
	return *this;
}

void ClapTrap::attack(std::string const &target){
	if (this->energyPoints > 0)
	{
		this->energyPoints--;
		std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing " << this->attackDamage << " points of damage!" << std::endl;
	}
	else
		std::cout << "ClapTrap " << this->name << " has no energy left!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount){
	if (this->hitPoints > 0)
	{
		this->hitPoints -= amount;
		if (this->hitPoints < 0)
			this->hitPoints = 0;
		std::cout << "ClapTrap " << this->name << " takes " << amount << " points of damage!" << std::endl;
	}
	else
		std::cout << "ClapTrap " << this->name << " is already dead!" << std::endl;
	// std::cout << "ClapTrap " << this->name << " takes " << amount << " points of damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount){
	if (this->hitPoints > 0)
	{
		this->hitPoints += amount;
		std::cout << "ClapTrap " << this->name << " is repaired by " << amount << " points!" << std::endl;
	}
	else
		std::cout << "ClapTrap " << this->name << " is already dead!" << std::endl;
	// std::cout << "ClapTrap " << this->name << " is repaired by " << amount << " points!" << std::endl;
}
