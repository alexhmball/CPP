#ifndef HUMANA
#define HUMANA

#include "Weapon.hpp"

class HumanA {
	private:
		std::string name;
		Weapon &weapon;
	public:
		HumanA(std::string name, Weapon &weapon);
		void attack(void);
};

#endif