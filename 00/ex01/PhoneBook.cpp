#include "PhoneBook.hpp"

void PhoneBook::addContact(Contact contact, int *index) {
	if (*index == 8)
		*index = 0;
	this->contacts[*index] = contact;
	*index += 1;
}

void PhoneBook::displayContacts(int index)
{
	for (int i = 0; i < index; i++)
	{
		std::cout << i << " ";
		std::cout << this->contacts[i].getInfo(0) << "|";
		std::cout << this->contacts[i].getInfo(1) << "|";
		std::cout << this->contacts[i].getInfo(2) << "|";
		std::cout << this->contacts[i].getInfo(3) << "|";
		std::cout << this->contacts[i].getInfo(4) << std::endl;
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
