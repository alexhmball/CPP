#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"

int main()
{
		Weapon club1 = Weapon("crude spiked club");
		HumanA bob("Bob", club1);
		bob.attack();
		club1.setType("some other type of club");
		bob.attack();
	
		Weapon club2 = Weapon("crudespikedclub");
		HumanB jim("Jim");
		jim.setWeapon(club2);
		jim.attack();
		club2.setType("some other type of club");
		jim.attack();

		HumanB Feddy("Feddy");
		Feddy.attack();
	return 0;
}