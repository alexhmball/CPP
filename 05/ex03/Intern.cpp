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

const char *Intern::NoFormException::what( ) const throw ( ) {
	return "No such Form.\n";
}

AForm *Intern::makeRobotomy(std::string target) {
	return new RobotomyRequestForm(target);
}

AForm *Intern::makePardon(std::string target) {
	return new PresidentialPardonForm(target);
}

AForm *Intern::makeShrubbs(std::string target) {
	return new ShrubberyCreationForm(target);
}

AForm *Intern::makeForm(std::string request, std::string target) {
	makeF ptr[] = {
		&Intern::makeShrubbs,
		&Intern::makeRobotomy,
		&Intern::makePardon,
	};
	for (int i = 0; i < 3; i++)
	{
		if (request == requests[i])
		{
			std::cout << "Intern created " << request << " form." << std::endl;
			return ((this->*ptr[i])(target));
		}
	}
	std::cout << "Intern couldn't create " << request << ", No such form.\n";
	throw Intern::NoFormException();
}