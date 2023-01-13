#include <iostream>
#include <sstream>
#include "Contact.hpp"
#include "PhoneBook.hpp"

Contact createContact() {
	std::string  firstName;
	std::string  lastName;
	std::string  nickName;
	std::string  phone_tmp;
	std::string  secret;
	int32_t      num;
	bool         allFiled = false;

	while (allFiled == false) {
		std::cout<<"First name: ";
		std::getline(std::cin, firstName);
		std::cout<<"Last name: ";
		std::getline(std::cin, lastName);
		std::cout<<"Nick name: ";
		std::getline(std::cin, nickName);
		std::cout<<"Darkest secret: ";
		std::getline(std::cin, secret);
		std::cout<<"Phone number: ";
		std::getline(std::cin, phone_tmp);
		if (firstName.length() == 0 || lastName.length() == 0 ||
		    nickName.length() == 0 || secret.length() == 0 || phone_tmp.length() == 0) {
			std::cout<<"ERROR: all values must be filled"<<std::endl;
			continue;
		}
		if (!std::all_of(phone_tmp.begin(), phone_tmp.end(), ::isnumber)) {
			std::cout<<"ERROR: phone number must be numeric"<<std::endl;
			continue ;
		} else {
			num = std::stoi(phone_tmp);
		}
		allFiled = true;
	}
	return (Contact(firstName, lastName, nickName, num, secret));
}

//TODO Add exit value
void showContacts(PhoneBook book) {
	std::string tmp;
	int         num;

	book.showList();
	while (1) {
		std::cout<<"Isnsert Index: ";
		std::getline(std::cin, tmp);
		if (!std::all_of(tmp.begin(), tmp.end(), ::isnumber)) {
			std::cout<<"ERROR: Try again with a numeric value"<<std::endl;
			continue;
		}
		num = std::stoi(tmp);
		if (num < 0 || num > book.getCont()) {
			std::cout<<"ERROR: Value must be between 0 - "<<book.getCont() - 1<<std::endl;
			continue;
		}
		break;
	}
	book.getContact(num);
}

int main() {
	std::string str;
	PhoneBook   book;

	std::cout<<"Welcome to your personal PhoneBook"<<std::endl<<std::endl;

	while (1) {
		std::cout<<"Insert a command: ADD, SEARCH, EXIT"<<std::endl;
		std::getline(std::cin, str);
		if (str.compare("ADD") == 0) {
			book.addContact(createContact());
			continue;
		}
		if (str.compare("SEARCH") == 0) {
			showContacts(book);
			continue;
		}
		if (str.compare("EXIT") == 0) {
			break;
		} else {
			std::cout<<"Ilegal args"<<std::endl;
		}
	}
	return (0);
}