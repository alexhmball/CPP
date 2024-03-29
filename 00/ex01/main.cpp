#include "Contact.hpp"
#include "PhoneBook.hpp"
#define GREEN  "\x1B[32m"
#define RESET  "\x1B[0m"
#define RED  "\x1B[31m"
#define RD(x) RED x RESET
#define GRN(x) GREEN x RESET


bool isOutOfBounds(std::string index, PhoneBook phoneBook)
{
	if (index.length() == 1)
	{
		if (index[0] >= '0' || index[0] < '9')
		{
			if (index[0] < phoneBook.getContactNum() + '0')
				return true;
		}
		std::cout << RD("Invalid index: ") << index << std::endl;
		return false;
	}
	std::cout << RD("Invalid index: ") << index << std::endl;
	return false;
}

int main(void)
{
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
					if (std::cin.fail())
						break;
					contact.insertInfo(info, i);
				}
			}
			phoneBook.addContact(contact, &contactNum);
			std::cout << GRN("Contact added") << std::endl;
			std::cin.clear();
		}
		else if (input == "SEARCH")
		{
			if (contactNum == 0)
			{
				std::cout << RD("No contacts to display") << std::endl;
				continue;
			}
			phoneBook.displayContacts();
			std::string index = "";
			int search;
			while (index.empty() || !isOutOfBounds(index, phoneBook))
			{
				std::cout << "Enter index: ";
				if (std::cin.fail())
					break;
				std::cin >> index;
			}
			search = index[0] - '0';
			phoneBook.searchContact(search);
			std::cin.clear();
			std::cin.ignore(10000, '\n');
		}
		else
			std::cout << RD("Invalid command: expected ADD, SEARCH, or EXIT") << std::endl;
	}
	return 0;
}
