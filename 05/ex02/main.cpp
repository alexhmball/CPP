#include "Bureaucrat.hpp"
#include "AForm.hpp"

int	main(void) {
	Bureaucrat homie("Homer", 200);
	// AForm important("super important AForm");

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