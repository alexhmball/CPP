#include "Intern.hpp"

std::string Intern::requests[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};

Intern::Intern() {
	std::cout << "Intern constructor called\n";
}

Intern::Intern(const Intern &I) {
	std::cout << "Intern copy constructor called\n";
	if (this != &I)
		*this = I;
}

Intern::~Intern() {
	std::cout << "Intern deconstructor called\n";
}

Intern &Intern::operator=(const Intern &I) {
	std::cout << "Intern copy assignment operator called\n";
	(void)I;
	return *this;
}

AForm *Intern::makeForm(std::string request, std::string target) {
	forms[0] = new ShrubberyCreationForm(target);
	forms[1] = new RobotomyRequestForm(target);
	forms[2] = new PresidentialPardonForm(target);
	AForm *ret = NULL;
	for (int i = 0; i < 3; i++)
	{
		if (request == requests[i])
		{
			ret = forms[i];
			std::cout << "Intern created " << request << " form." << std::endl;
			for (int j = i; j < 3; j++)
			{
				if (j != i)
					delete forms[i];
			}
			return ret;
		}
		delete forms[i];
	}
	std::cout << "Intern couldn't create " << request << " no such form exists.\n";
	return ret;
}