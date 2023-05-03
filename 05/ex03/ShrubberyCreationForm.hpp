#ifndef SHRUBBERYCREATIONFORM
#define SHRUBBERYCREATIONFORM

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include <iostream>
#include <fstream>

class ShrubberyCreationForm : public AForm {
	private:
		std::string target;
	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm(const ShrubberyCreationForm &S);
		~ShrubberyCreationForm();
		ShrubberyCreationForm &operator=(const ShrubberyCreationForm &S);
		void execute(Bureaucrat const &executor) const;
		std::string getTarget( void ) const;
};

#endif