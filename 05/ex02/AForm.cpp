#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm( ) : name("CLASSIFIED"), signature(false), signature_grade(50), execute_grade(50) {
	std::cout << "AForm default constructor called\n";
}

AForm::AForm(const std::string name) : name(name) , signature_grade(50), execute_grade(50) {
	std::cout << "AForm constructor called\n";
}

AForm::AForm( const AForm &F) : name(F.name), signature_grade(F.signature_grade), execute_grade(F.execute_grade) {
	std::cout << "AForm copy constructor called\n";
	if (this != &F)
		*this = F;
}

AForm::~AForm( ) {
	std::cout << "AForm deconstructor called\n";
}

AForm &AForm::operator=(const AForm &F) {
	std::cout << "AForm copy assignment operaor called\n";
	if (this != &F)
	{
		signature = F.signature;
	}
	return *this;
}

const char * AForm::GradeTooHighException::what( ) const throw ( ) {
	return "AForm grade too High\n";
}

const char * AForm::GradeTooLowException::what( ) const throw ( ) {
	return "AForm grade too Low\n";
}

std::string AForm::getName( void ) const {
	return name;
}

bool AForm::isSigned( void ) const {
	return signature;
}

int AForm::getSignatureGrade( void ) const {
	return signature_grade;
}

int AForm::getExcecutionGrade(void ) const {
	return execute_grade;
}

void AForm::beSigned(Bureaucrat &B) {
	try {
		if (B.getGrade() >= signature_grade)
			throw AForm::GradeTooLowException();
		signature = true;
	}
	catch (std::exception &e) {
		std::cout << e.what();
	}
}

std::ostream& operator<<(std::ostream &os, const AForm &F) {
	(void)os;
	std::cout << "AForm: " << F.getName() << " | Signed: " << F.isSigned() << " | Signature Grade: " << F.getSignatureGrade() << " | Execution Grade: " << F.getExcecutionGrade() << std::endl;
	return os;
}