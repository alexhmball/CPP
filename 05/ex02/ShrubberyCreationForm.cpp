#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145, 137), target("CLASSIFIED") {
	std::cout << "ShrubberyCreationForm defaut constructor called\n";
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", 145, 137), target(target) {
	std::cout << "ShrubbeyCreationForm constructor called\n";
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &S)
: AForm(S.getName(), S.getSignatureGrade(), S.getExcecutionGrade()), target(S.target) {
	std::cout << "ShrubberyCreationForm copy constructor called\n";
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
	std::cout << "ShrubberyCreationForm deconstructor called\n";
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &S) {
	std::cout << "ShrubberyCreationForm copy assignment operator called\n";
	if (this != &S)
	{
		this->target = S.getTarget();
	}
	return *this;
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const {
	try {
		if (!this->isSigned())
			throw AForm::NotSignedException();
		if (executor.getGrade() > this->getExcecutionGrade())
			throw AForm::GradeTooLowException();
		file.open(target + "_shrubbery", std::ios::out);
		if (!file)
		{
			std::cout << file << "file couldn't be created" << std::endl;
			return ;
		}
		file << "Trees...";
		file.close();
	}
	catch (std::exception &e)
	{
		std::cout << e.what();
	}
}

std::string ShrubberyCreationForm::getTarget( void ) const {
	return this->target;
}

