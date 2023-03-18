#ifndef FRAGTRAP
#define FRAGTRAP

#include "ClapTrap.hpp"

class FragTrap: virtual public ClapTrap {
	public:
		FragTrap();
		FragTrap(std::string name);
		FragTrap(const FragTrap &frag);
		~FragTrap();
		FragTrap &operator=(const FragTrap &frag);
		void highFiveGuys(void);
};

#endif