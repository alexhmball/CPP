#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main(void) {
	Bureaucrat homie("Homer", 200);
	Form important("super important form");

	std::cout << homie;
	homie.decrement();
	homie.decrement();
	std:: cout << important;
	homie.signForm(important);
	std::cout << homie;
	for (int i = 0; i < 152; i++)
	{
		homie.increment();
	}
	std::cout << homie;
	homie.signForm(important);
}