#ifndef SCAVTRAP
#define SCAVTRAP

#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap {
	public:
		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap &scav);
		~ScavTrap();
		ScavTrap &operator=(const ScavTrap &scav);
		void guardGate();
		void attack(const std::string &target);
};

#endif