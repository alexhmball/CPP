#include "Identify.hpp"

int main(void) {
	Base *ya = generate();
	identify(ya);
	identify(*ya);
	delete ya;
	return 0;
}