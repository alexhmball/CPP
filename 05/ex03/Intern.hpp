#ifndef INTERN
#define INTERN

#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

class Intern {
	private:
		static std::string requests[3];
		AForm *forms[3];
	public:
		Intern();
		Intern(const Intern &I);
		~Intern();
		Intern &operator=(const Intern &I);
		AForm *makeForm(std::string request, std::string target);
};

#endif