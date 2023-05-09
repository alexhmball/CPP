#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"

int	main(void) {
	Bureaucrat homie("Homer", 200);
	// AForm notPossible("super important AForm");
	PresidentialPardonForm important("Ted Bundy");
	ShrubberyCreationForm newshrubs("home");
	RobotomyRequestForm robo("homie");
	Intern someRandomIntern;
	AForm *valid;
	// AForm *invalid;
	try {
		std::cout << homie;
		homie.signForm(important);
		important.execute(homie);
		valid = someRandomIntern.makeForm("shrubbery creation", "school");
		// invalid = someRandomIntern.makeForm("shruggery", "school");
		for (int i = 0; i < 152; i++)
		{
			homie.increment();
		}
		// homie.signForm(important);
		// homie.signForm(newshrubs);
		homie.signForm(*valid);
		// homie.signForm(*invalid);
		// homie.signForm(robo);
		// important.execute(homie);
		// homie.executeForm(important);
		// homie.executeForm(robo);
		// homie.executeForm(robo);
		// homie.executeForm(robo);
		// homie.executeForm(robo);
		// homie.executeForm(robo);
		// homie.executeForm(robo);
		// homie.executeForm(newshrubs);
		homie.executeForm(*valid);
		// homie.executeForm(*invalid);
		std::cout << homie;
	}
	catch (std::exception &e)
	{
		std::cout << "exception caught in main " << e.what() << "cannot continue\n";
	}
}