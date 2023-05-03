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
	std::string filename = target + "_shrubbery";
	std::fstream MyFile(filename);
	try {
		if (!this->isSigned())
			throw AForm::NotSignedException();
		if (executor.getGrade() > this->getExcecutionGrade())
			throw AForm::GradeTooLowException();
		// if (!MyFile)
		// {
		// 	std::cout << filename << "file couldn't be created" << std::endl;
		// 	return ;
		// }
		MyFile << "               ,@@@@@@@," << std::endl;
		MyFile << "       ,,,.   ,@@@@@@/@@,  .oo8888o." << std::endl;
		MyFile << "    ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o" << std::endl;
		MyFile << "   ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'" << std::endl;
		MyFile << "   %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'" << std::endl;
		MyFile << "   %&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'" << std::endl;
		MyFile << "   `&%\\ ` /%&'    |.|        \\ '|8'" << std::endl;
		MyFile << "       |o|        | |         | |" << std::endl;
		MyFile << "       |.|        | |         | |" << std::endl;
		MyFile << "    \\/ ._\\//_/__/  ,\\_//__\\/.  \\_//__/_" <<  std::endl;
		MyFile.close();
	}
	catch (std::exception &e)
	{
		std::cout << e.what();
	}
}

std::string ShrubberyCreationForm::getTarget( void ) const {
	return this->target;
}

