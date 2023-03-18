#include "DiamondTrap.hpp"

int main(void) {
	DiamondTrap billyJoeBob("billyjoebob");
	DiamondTrap copy(billyJoeBob);
	DiamondTrap randy;

	copy.attack("Jimmy");
	copy.takeDamage(90);
	copy.takeDamage(90);
	copy.takeDamage(90);
	copy.beRepaired(100);
	copy.highFiveGuys();
	copy.whoAmI();
	billyJoeBob.attack("Jimmy");
	billyJoeBob.takeDamage(90);
	billyJoeBob.takeDamage(90);
	billyJoeBob.takeDamage(90);
	billyJoeBob.beRepaired(100);
	billyJoeBob.highFiveGuys();
	billyJoeBob.whoAmI();
	randy.whoAmI();
	for (int i = 1; i <= 51; i++)
	{
		std::cout << i << ":  ";
		randy.attack("random");
	}
}