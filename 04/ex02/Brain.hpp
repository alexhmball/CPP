#ifndef BRAIN
#define BRAIN

#include <iostream>
#include <string>

class Brain {
	private:
		std::string ideas[100];
		int i;
	public:
		Brain();
		Brain(const Brain &B);
		Brain &operator=(const Brain &B);
		virtual ~Brain();
		void insertIdea(std::string idea);
		void printIdeas() const;
};

#endif