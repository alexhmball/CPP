#ifndef HUMANB
#define HUMANB

#include "Weapon.hpp"

class HumanB {
	private:
		std::string name;
		Weapon *weapon;
	public:
		HumanB(std::string name);
		void attack(void);
		void setWeapon(Weapon &weapon);
};

#endif