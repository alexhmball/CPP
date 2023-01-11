#include "Contact.hpp"

void Contact::insertInfo(std::string info, int index) {
	switch (index) {
		case 0:
			firstName = info;
			break;
		case 1:
			lastName = info;
			break;
		case 2:
			nickname = info;
			break;
		case 3:
			phoneNumber = info;
			break;
		case 4:
			darkestSecret = info;
			break;
	}
}

std::string Contact::getInfo(int index) {
	switch (index) {
		case 0:
			return firstName;
		case 1:
			return lastName;
		case 2:
			return nickname;
		case 3:
			return phoneNumber;
		case 4:
			return darkestSecret;
	}
	return NULL;
}
