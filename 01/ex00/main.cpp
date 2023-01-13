#include "Zombie.hpp"

int	main(void)
{
	Zombie fred("Fred");
	Zombie *zomb;

	fred.announce();
	randomChump("George");
	zomb = newZombie("Patty");
	zomb->announce();
	delete zomb;
	return (0);
}
