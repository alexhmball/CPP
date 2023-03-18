#ifndef DIAMONDTRAP
#define DIAMONDTRAP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap: public ScavTrap, public FragTrap {
	private:
		std::string name;
	public:
		DiamondTrap();
		DiamondTrap(std::string name);
		DiamondTrap(const DiamondTrap &dia);
		~DiamondTrap();
		DiamondTrap &operator=(const DiamondTrap &dia);
		void whoAmI();
};

#endif