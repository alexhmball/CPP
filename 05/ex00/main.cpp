#include "Bureaucrat.hpp"

int	main(void) {
	Bureaucrat homie("Homer", 200);

	std::cout << homie;
	homie.decrement();
	homie.decrement();
	std::cout << homie;
	for (int i = 0; i < 152; i++)
	{
		homie.increment();
	}
	std::cout << homie;
}