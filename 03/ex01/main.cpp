#include "ScavTrap.hpp"

int main (void) {
	// ScavTrap test;
	ScavTrap Johnny("Johnny");
	ScavTrap Jimmy(Johnny);
	ScavTrap Joe;

	Johnny.attack("Jim");
	Johnny.takeDamage(3);
	Johnny.beRepaired(10);
	Johnny.guardGate();
	Joe.guardGate();
	return 0;
}