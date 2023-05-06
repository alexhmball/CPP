#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"

int	main(void) {
	Bureaucrat homie("Homer", 200);
	// AForm important("super important AForm");
	PresidentialPardonForm important("Ted Bundy");
	ShrubberyCreationForm newshrubs("home");
	RobotomyRequestForm robo("homie");
	Intern someRandomIntern;
	AForm *form;

	std::cout << homie;
	homie.signForm(important);
	important.execute(homie);
	form = someRandomIntern.makeForm("shrubbery creation", "school");
	// homie.decrement();
	// homie.decrement();
	// std::cout << homie;
	for (int i = 0; i < 152; i++)
	{
		homie.increment();
	}
	homie.signForm(important);
	homie.signForm(newshrubs);
	homie.signForm(*form);
	homie.signForm(robo);
	important.execute(homie);
	homie.executeForm(important);
	homie.executeForm(robo);
	homie.executeForm(robo);
	homie.executeForm(robo);
	homie.executeForm(robo);
	homie.executeForm(robo);
	homie.executeForm(robo);
	homie.executeForm(newshrubs);
	homie.executeForm(*form);
	// std::cout << homie;
}