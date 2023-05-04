#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("UNKOWN"), grade(150) {
	std::cout << "Default bureaucrat constructor called\n";
}

Bureaucrat::Bureaucrat(const std::string name) : name(name), grade(150) {
	std::cout << "Bureaucrat constructor called\n";
}

Bureaucrat::Bureaucrat(const std::string name, int grade) : name(name), grade(150) {
	std::cout << "Bureaucrat complete constructor called\n";
	try
	{
		if (grade > 150)
			throw Bureaucrat::GradeTooLowException();
		if (grade < 1)
			throw Bureaucrat::GradeTooHighException();
		this->grade = grade;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what();
	}
}

Bureaucrat::Bureaucrat(const Bureaucrat &B) {
	std::cout << "Bureaucrat copy constructor called\n";
	if (this != &B)
		*this = B;
}

Bureaucrat::~Bureaucrat() {
	std::cout << "Bureaucrat destructor called\n";
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &B) {
	std::cout << "Bureaucrat assignment operator called\n";
	if (this != &B)
		grade = B.grade;
	return *this;
}

void Bureaucrat::increment(void) {
	try
	{
		if (this->grade - 1 > 150)
			throw Bureaucrat::GradeTooLowException();
		if (this->grade - 1 < 1)
			throw Bureaucrat::GradeTooHighException();
		this->grade--;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what();
	}
}

void Bureaucrat::decrement(void) {
	try
	{
		if (this->grade + 1 > 150)
			throw Bureaucrat::GradeTooLowException();
		if (this->grade + 1 < 1)
			throw Bureaucrat::GradeTooHighException();
		this->grade++;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what();
	}
}

std::string Bureaucrat::getName(void) const {
	return name;
}

int Bureaucrat::getGrade(void) const {
	return grade;
}

const char *Bureaucrat::GradeTooLowException::what() const throw () {
	return "Exception caught, Grade too low.\n";
}

const char *Bureaucrat::GradeTooHighException::what() const throw () {
	return "Exception caught, Grade too high.\n";
}

std::ostream& operator<<(std::ostream &os, const Bureaucrat &B) {
	(void)os;
	std::cout << "Bureaucrat " << B.getName() << " has a grade of " << B.getGrade() << std::endl;
	return os;
}