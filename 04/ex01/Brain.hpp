#ifndef BRAIN
#define BRAIN

#include <iostream>
#include <string>

class Brain {
	private:
		std::string ideas[100];
	public:
		Brain();
		Brain(const Brain &B);
		Brain &operator=(const Brain &B);
		~Brain();
};

#endif