#ifndef ROBOTOMYREQUESTFORM
#define ROBOTOMYREQUESTFORM

#include "AForm.hpp"
#include "Bureaucrat.hpp"

class RobotomyRequestForm : public AForm {
	private:
		std::string target;
	public:
		RobotomyRequestForm();
		RobotomyRequestForm(std:string target);
		RobotomyRequestForm(const RobotomyRequestForm &R);
		~RobotomyRequestForm();
		RobotomyRequestForm &operator=(const RobotomyRequestForm &R);
		void execute(Bureaucrat const &executor) const;
		std::string getTarget( void ) const;
}

#endif