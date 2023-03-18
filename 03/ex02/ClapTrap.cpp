#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : name("ClapTrap"), hitPoints(10), energyPoints(10), attackDamage(0){
	std::cout << "ClapTrap default constructor called\n";
}

ClapTrap::ClapTrap(std::string name) : name(name), hitPoints(10), energyPoints(10), attackDamage(0){
	std::cout << "ClapTrap constructor called\n";
}

ClapTrap::ClapTrap(const ClapTrap &trap) {
	std::cout << "ClapTrap copy constructor called\n";
	*this = trap;
}

ClapTrap::~ClapTrap(){
	std::cout << "ClapTrap destructor called\n";
}

ClapTrap &ClapTrap::operator=(const ClapTrap &trap){
	std::cout << "ClapTrap assignation operator called\n";
	name = trap.name;
	hitPoints = trap.hitPoints;
	energyPoints = trap.energyPoints;
	attackDamage = trap.attackDamage;
	return *this;
}

void ClapTrap::attack(std::string const &target){
	if (energyPoints && hitPoints)
	{
		energyPoints--;
		std::cout << "ClapTrap " << name << " attacks " << target << ", causing " << attackDamage << " points of damage!\n";
	}
	else if (hitPoints <= 0)
		std::cout << "ClapTrap " << name << " is dead, cannot attack!\n";
	else if (energyPoints <= 0)
		std::cout << "ClapTrap " << name << " has no engery left!\n";
}

void ClapTrap::takeDamage(unsigned int amount){
	if (hitPoints > 0)
	{
		hitPoints -= amount;
		if (hitPoints < 0)
			hitPoints = 0;
		std::cout << "ClapTrap " << name << " takes " << amount << " points of damage!\n";
	}
	else
		std::cout << "ClapTrap " << name << " is already dead, have mercy!\n";
}

void ClapTrap::beRepaired(unsigned int amount){
	if (hitPoints && energyPoints)
	{
		hitPoints += amount;
		energyPoints--;
		std::cout << "ClapTrap " << name << " is repaired by " << amount << " points!\n";
	}
	else if (hitPoints <= 0)
		std::cout << "ClapTrap " << name << " is dead, he cannot repair himself!\n";
	else if (energyPoints <= 0)
		std::cout << "ClapTrap " << name << " has no energy left!\n";
}
