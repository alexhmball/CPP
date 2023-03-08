#include "DiamondTrap.hpp"

int main(void) {
	DiamondTrap billyJoeBob("billyjoebob");
	DiamondTrap copy(billyJoeBob);

	copy.attack("Jimmy");
	copy.takeDamage(90);
	copy.takeDamage(90);
	copy.takeDamage(90);
	copy.beRepaired(100);
	copy.highFiveGuys();
	copy.whoAmI();
}