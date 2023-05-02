#ifndef PRESIDENTIALPARDONFORM
#define PRESIDENTIALPARDONFORM

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include <fstream>

class PresidentialPardonForm : public AForm {
	private:
		std::string target;
	public:
		PresidentialPardonForm();
		PresidentialPardonForm(std::string target);
		PresidentialPardonForm(const PresidentialPardonForm &P);
		~PresidentialPardonForm();
		PresidentialPardonForm &operator=(const PresidentialPardonForm &P);
		void execute(Bureaucrat const & executor) const;
		std::string getTarget( void ) const;
};

#endif