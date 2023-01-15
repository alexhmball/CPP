#include "ClapTrap.hpp"

int main (void) {
	ClapTrap clapTrap1;
	ClapTrap clapTrap2("ClapTrap2");
	ClapTrap clapTrap3(clapTrap2);
	clapTrap1 = clapTrap3;
	clapTrap1.attack("target");
	clapTrap1.takeDamage(5);
	clapTrap1.beRepaired(10);
	return 0;
}