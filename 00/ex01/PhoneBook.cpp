#include "PhoneBook.hpp"

PhoneBook::PhoneBook(){
	contactNumber = 0;
}

void PhoneBook::addContact(Contact contact, int *index) {
	if (*index == 8)
		*index = 0;
	contacts[*index] = contact;
	*index += 1;
	if (contactNumber < 8)
		contactNumber += 1;
}

void PhoneBook::displayContacts()
{
	std::string display;
	std::cout << std::string(66, '*') << std::endl;
	for (int i = 0; i < contactNumber; i++)
	{
		std::cout << std::right << std::setw(10) << i << "|";
		for (int j = 0; j < 5; j++)
		{
			display = contacts[i].getInfo(j);
			if (display.length() > 10)
				display = display.substr(0, 9) + ".";
			std::cout << std::right << std::setw(10) << display << "|";
		}
		std::cout << std::endl;
		std::cout << std::string(66, '*') << std::endl;
	}
}

void PhoneBook::searchContact(int index) {
	if (index >= 0 && index < 8)
	{
		std::cout << contacts[index].getInfo(0) << std::endl;
		std::cout << contacts[index].getInfo(1) << std::endl;
		std::cout << contacts[index].getInfo(2) << std::endl;
		std::cout << contacts[index].getInfo(3) << std::endl;
		std::cout << contacts[index].getInfo(4) << std::endl;
	}
}

int PhoneBook::getContactNum(){
	return contactNumber;
}
