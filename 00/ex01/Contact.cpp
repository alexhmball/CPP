#include "Contact.hpp"

void Contact::insertInfo(std::string info, int index) {
	switch (index) {
		case 0:
			this->firstName = info;
		case 1:
			this->lastName = info;
		case 2:
			this->nickname = info;
		case 3:
			this->phoneNumber = info;
		case 4:
			this->darkestSecret = info;
	}
}

std::string Contact::getInfo(int index) {
	switch (index) {
		case 0:
			return this->firstName;
		case 1:
			return this->lastName;
		case 2:
			return this->nickname;
		case 3:
			return this->phoneNumber;
		case 4:
			return this->darkestSecret;
	}
	return NULL;
}
