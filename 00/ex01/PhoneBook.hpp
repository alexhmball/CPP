#ifndef PHONEBOOK
# define PHONEBOOK


#include "Contact.hpp"


class PhoneBook {

	private:
		Contact contacts[8];
		int		contactNumber;
	public:
		PhoneBook();
		void addContact(Contact contact, int *index);
		void searchContact(int index);
		void displayContacts();
		int  getContactNum();
};


#endif
