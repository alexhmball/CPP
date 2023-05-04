#ifndef BUREAUCRAT
#define BUREAUCRAT

#include <string>
#include <iostream>
#include <exception>

class Bureaucrat {
	private:
		const std::string name;
		int grade;
	public:
		Bureaucrat();
		Bureaucrat(const Bureaucrat &B);
		Bureaucrat(const std::string name);
		Bureaucrat(const std::string name, int grade);
		~Bureaucrat();
		void increment( void );
		void decrement( void );
		Bureaucrat &operator=(const Bureaucrat &B);
		std::string getName(void) const;
		int getGrade(void) const;
		class GradeTooHighException : public std::exception {
			public:
				const char * what ( ) const throw ();
		};
		class GradeTooLowException : public std::exception {
			public:
				const char * what ( ) const throw ();
		};
};

std::ostream& operator<<(std::ostream &os, const Bureaucrat &B);

#endif