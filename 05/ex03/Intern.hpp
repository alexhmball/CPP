#ifndef INTERN
#define INTERN

#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

class Intern {
	private:
		static std::string requests[3];
	public:
		Intern();
		Intern(const Intern &I);
		~Intern();
		Intern &operator=(const Intern &I);
		class NoFormException : public std::exception {
			public:
				const char * what( ) const throw ( );
		};
		AForm *makeForm(std::string request, std::string target);
		AForm *makeShrubbs(std::string target);
		AForm *makePardon(std::string target);
		AForm *makeRobotomy(std::string target);
};

typedef AForm *(Intern::*makeF)(std::string);

#endif