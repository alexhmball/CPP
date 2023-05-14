#include "Identify.hpp"

#include <cstdlib>

Base *makeA(void) {
	Base *base = new A;
	return base;
}

Base *makeB(void) {
	Base *base = new B;
	return base;
}

Base *makeC(void) {
	Base *base = new C;
	return base;
}


Base * generate(void) {
	srand(time(NULL));
	int r = (rand() % 3);
	make base[] = {
		&makeA,
		&makeB,
		&makeC,
	};
	std::cout << "Generated: " << (char)((char)r + 'A') << std::endl;
	return base[r]();
}

void identify(Base* p) {
	std::cout << "Pointer: ";
	if (dynamic_cast<A*>(p)) {
		std::cout << "A" << std::endl;
	} else if (dynamic_cast<B*>(p)) {
		std::cout << "B" << std::endl;
	} else if (dynamic_cast<C*>(p)) {
		std::cout << "C" << std::endl;
	} else {
		std::cout << "Unknown" << std::endl;
	}
}

void identify(Base& p) {
	std::cout << "Reference: ";
	try {
		A& a = dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;
		(void)a;
	}
	catch (std::exception &e) {
		
	}
	try {
		B& b = dynamic_cast<B&>(p);
		std::cout << "B" << std::endl;
		(void)b;
	}
	catch (std::exception &e) {
		
	}
	try {
		C& c = dynamic_cast<C&>(p);
		std::cout << "C" << std::endl;
		(void)c;
	}
	catch (std::exception &e) {
		
	}
}