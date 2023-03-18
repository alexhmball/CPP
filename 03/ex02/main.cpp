#include "FragTrap.hpp"

int main(void) {
	FragTrap billy("Billy");
	FragTrap Bill(billy);

	billy.attack("Bill");
	Bill.takeDamage(20);
	Bill.beRepaired(50);
	billy.highFiveGuys();
}