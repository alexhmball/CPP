#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form( ) : name("CLASSIFIED"), signature(false), signature_grade(50), execute_grade(50) {
	std::cout << "Form default constructor called\n";
}

Form::Form(const std::string name) : name(name) , signature_grade(50), execute_grade(50) {
	std::cout << "Form constructor called\n";
}

Form::Form( const Form &F) : name(F.name), signature_grade(F.signature_grade), execute_grade(F.execute_grade) {
	std::cout << "Form copy constructor called\n";
	if (this != &F)
		*this = F;
}

Form::~Form( ) {
	std::cout << "Form deconstructor called\n";
}

Form &Form::operator=(const Form &F) {
	std::cout << "Form copy assignment operaor called\n";
	if (this != &F)
	{
		signature = F.signature;
	}
	return *this;
}

const char * Form::GradeTooHighException::what( ) const throw ( ) {
	return "Form grade too High\n";
}

const char * Form::GradeTooLowException::what( ) const throw ( ) {
	return "Form grade too Low\n";
}

std::string Form::getName( void ) const {
	return name;
}

bool Form::isSigned( void ) const {
	return signature;
}

int Form::getSignatureGrade( void ) const {
	return signature_grade;
}

int Form::getExcecutionGrade(void ) const {
	return execute_grade;
}

void Form::beSigned(Bureaucrat &B) {
	try {
		if (B.getGrade() >= signature_grade)
			throw Form::GradeTooLowException();
		signature = true;
	}
	catch (std::exception &e) {
		std::cout << e.what();
	}
}

std::ostream& operator<<(std::ostream &os, const Form &F) {
	(void)os;
	std::cout << "Form: " << F.getName() << " | Signed: " << F.isSigned() << " | Signature Grade: " << F.getSignatureGrade() << " | Execution Grade: " << F.getExcecutionGrade() << std::endl;
	return os;
}