#include "Identify.hpp"

int main(void) {
	Base *ya = generate();
	std::cout << ya;
	delete ya;
	return 0;
}