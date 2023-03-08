#ifndef FRAGTRAP
#define FRAGTRAP

#include "ClapTrap.hpp"

class FragTrap: public ClapTrap {
	public:
		FragTrap();
		FragTrap(std::string name);
		FragTrap(const FragTrap &frag);
		~FragTrap();
		FragTrap &operator=(const FragTrap &frag);
		void highFiveGuys(void);
};

#endif