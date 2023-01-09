#include "Contact.hpp"
#include "PhoneBook.hpp"

int main() {
	std::string input;
	std::string instruction[5] = {"First name", "Last name", "Nickname", "Phone number", "Darkest secret"};
	PhoneBook phoneBook;
	int contactNum = 0;

	while (std::getline(std::cin, input))
	{
		if (input == "EXIT")
			break;
		else if (input == "ADD")
		{
			Contact contact;
			std::string info;
			std::cout << "Enter contact info" << std::endl;
			for (int i = 0; i < 5; i++)
			{
				info = "";
				while (info.empty())
				{
					std::cout << instruction[i] << ": ";
					std::getline(std::cin, info);
					contact.insertInfo(info, i);
				}
			}
			phoneBook.addContact(contact, &contactNum);
			std::cout << "Contact added" << std::endl;
		}
		else if (input == "SEARCH")
		{
			phoneBook.displayContacts(contactNum);
			int index;
			std::cin >> index;
			phoneBook.searchContact(index);
		}
	}
	return 0;
}
