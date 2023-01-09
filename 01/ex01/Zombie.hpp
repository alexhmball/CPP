#ifndef ZOMBIE
#define ZOMBIE

#include <string>

class Zombie {

	private:
		std::string name;
	public:
		Zombie();
		void announce (void);
		Zombie(std::string name);
		~Zombie();
};

#endif
