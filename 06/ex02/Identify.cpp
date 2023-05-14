#include "Identify.hpp"

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
	make base[] = {
		&makeA,
		&makeB,
		&makeC,
	};
	return base[1]();
}