#ifndef FORM
#define FORM

#include <iostream>
#include <string>
#include <exception>

class Bureaucrat;

class Form {
	private:
		const std::string name;
		bool signature;
		const int signature_grade;
		const int execute_grade;
	public:
		Form( );
		Form(const Form &F);
		Form( const std::string name );
		~Form( );
		Form &operator=(const Form &F);
		class GradeTooHighException : public std::exception {
			public:
				const char * what ( ) const throw ( );
		};
		class GradeTooLowException : public std::exception {
			public:
				const char * what ( ) const throw ( );
		};
		std::string getName( void ) const;
		bool isSigned( void ) const;
		int getSignatureGrade( void ) const;
		int getExcecutionGrade( void ) const;
		void beSigned(Bureaucrat &B);
};

std::ostream& operator<<(std::ostream &os, const Form &F);

#endif