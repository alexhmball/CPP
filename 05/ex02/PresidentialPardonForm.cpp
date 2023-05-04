#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm()
: AForm("PresidentialPardonForm", 25, 5), target("UNKOWN") {
	std::cout << "PresidentialPardonForm default constructor called\n";
}

PresidentialPardonForm::PresidentialPardonForm(std::string target)
: AForm("PresidentialPardonForm", 25, 5), target(target) {
	std::cout << "PresidentialPardonForm constructor called\n";
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &P)
: AForm(P.getName(), P.getSignatureGrade(), P.getExcecutionGrade()), target(P.target) {
	std::cout << "PresidentialPardonForm copy constructor called\n";
}

PresidentialPardonForm::~PresidentialPardonForm() {
	std::cout << "PresidentialPardonForm deconstructor called\n";
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &P) {
	std::cout << "PresidentialPardonForm copy assignment operator called\n";
	if (this != &P)
		this->target = P.getTarget();
	return *this;
}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const {
	try {
		if (!this->isSigned())
			throw AForm::NotSignedException();
		if (executor.getGrade() > this->getExcecutionGrade())
			throw AForm::GradeTooLowException();
		std::cout << target << " has been pardoned by Zahpod Beeblebrox.\n";
	}
	catch (std::exception &e)
	{
		std::cout << e.what();
	}
}

std::string PresidentialPardonForm::getTarget( void ) const {
	return this->target;
}