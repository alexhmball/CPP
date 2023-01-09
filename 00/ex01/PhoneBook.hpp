#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"

#ifndef PHONEBOOK
# define PHONEBOOK

class PhoneBook {

	private:
		Contact contacts[8];
		int		contactNumber;
	public:
		void addContact(Contact contact, int *index);
		void searchContact(int index);
		void displayContacts();
};

#endif
#endif
