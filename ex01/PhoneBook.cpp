#include "PhoneBook.hpp"

void PhoneBook::addContact(Contact contact, int *index) {
	if (*index == 8)
		*index = 0;
	this->contacts[*index] = contact;
	*index += 1;
	if (this->contactNumber < 8)
		this->contactNumber += 1;
}

void PhoneBook::displayContacts()
{
	std::string display;
	std::cout << std::string(66, '*') << std::endl;
	for (int i = 0; i < this->contactNumber; i++)
	{
		std::cout << i << std::setw(10) << "|";
		for (int j = 0; j < 5; j++)
		{
			display = this->contacts[i].getInfo(j);
			if (display.length() > 10)
				display = display.substr(0, 9) + ".";
			std::cout << display << std::setw(11 - display.length()) << "|";
		}
		std::cout << std::endl;
		std::cout << std::string(66, '*') << std::endl;
	}
}

void PhoneBook::searchContact(int index) {
	if (index >= 0 && index < 8)
	{
		std::cout << this->contacts[index].getInfo(0) << std::endl;
		std::cout << this->contacts[index].getInfo(1) << std::endl;
		std::cout << this->contacts[index].getInfo(2) << std::endl;
		std::cout << this->contacts[index].getInfo(3) << std::endl;
		std::cout << this->contacts[index].getInfo(4) << std::endl;
	}
}
