#include "HumanA.hpp"
#include "Weapon.hpp"
#include <iostream>

HumanA::HumanA(std::string name, Weapon &weapon) : name(name), weapon(weapon) {
}

void HumanA::attack(void) {
	std::cout << this->name << " attacks with his " << this->weapon.getType() << std::endl;
}

