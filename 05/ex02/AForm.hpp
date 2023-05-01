#ifndef AFORM
#define AFORM

#include <iostream>
#include <string>
#include <exception>

class Bureaucrat;

class AForm {
	private:
		const std::string name;
		bool signature;
		const int signature_grade;
		const int execute_grade;
	public:
		AForm( );
		AForm(const AForm &F);
		AForm( const std::string name );
		~AForm( );
		AForm &operator=(const AForm &F);
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
		virtual void execute(Bureaucrat const & executor) = 0;
};

std::ostream& operator<<(std::ostream &os, const AForm &F);

#endif