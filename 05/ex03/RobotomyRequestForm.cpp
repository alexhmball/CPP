#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm()
: AForm("RobotomyRequestForm", 72, 45), target("CLASSIFIED") {
	std::cout << "RobotomyRquestForm default constructor called\n";
}

RobotomyRequestForm::RobotomyRequestForm(std::string target)
: AForm("RobotomyRequestForm", 72, 45), target(target) {
	std::cout << "RobotomyRequestForm constructor called\n";
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &R)
: AForm(R.getName(), R.getSignatureGrade(), R.getExcecutionGrade()), target(R.getTarget()) {
	std::cout << "RobotomyRequestForm copy constructor called\n";
}

RobotomyRequestForm::~RobotomyRequestForm() {
	std::cout << "RobotomyRequestForm deconstructor called\n";
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &R) {
	std::cout << "RobotomyRequestForm copy assignment operator called\n";
	if (this != &R)
	{
		this->target = R.getTarget();
	}
	return *this;
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const {
	try {
		if (!this->isSigned())
			throw AForm::NotSignedException();
		if (executor.getGrade() > this->getExcecutionGrade())
			throw AForm::GradeTooLowException();
		std::cout << "*~LOUD DRILLING NOISES*~\n";
		if (rand() % 2 == 0)
			throw RobotomyRequestForm::RobotoyUnsuccessfulException();
		std::cout << target << " has been successfully Robotomized.\n";
	}
	catch (std::exception &e) {
		std::cout << e.what();
	}
}

const char *RobotomyRequestForm::RobotoyUnsuccessfulException::what() const throw () {
	return "Robotomy failed.\n";
}

std::string RobotomyRequestForm::getTarget( void ) const {
	return this->target;
}