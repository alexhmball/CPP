#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <string>
#include <iostream>

#ifndef CONTACT
# define CONTACT

class Contact {

	private:
		std::string firstName;
		std::string lastName;
		std::string nickname;
		std::string phoneNumber;
		std::string darkestSecret;
	public:
		void insertInfo(std::string info, int index);
		std::string getInfo(int index);
};

#endif
#endif
