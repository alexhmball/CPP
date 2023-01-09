#include "Zombie.hpp"
#include "Zombie.h"

int	main(void)
{
	Zombie* horde;

	horde = zombieHorde(5, "Jeff");
	for (int i = 0; i < 5; i++)
		horde[i].announce();
	return (0);
}
