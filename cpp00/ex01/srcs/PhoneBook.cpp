#include <string>
#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <iostream>
#include <sstream>
#include <iomanip>


PhoneBook::PhoneBook() {
	this->oldest = 0;
	this->cont = 0;
	return ;
}

PhoneBook::~PhoneBook() {
	return;
}

int PhoneBook::addContact(Contact contact){
	if (this->cont > 7) {
		contact.setId(this->oldest);
		this->contactList[this->oldest] = contact;
		if (this->oldest > 7) {
			this->oldest = 0;
		} else {
			this->oldest++;
		}
	} else {
		contact.setId(this->cont);
		this->contactList[this->cont] = contact;
		this->cont++;
	}
	return 0;
}

void PhoneBook::showList() {
	std::cout << " " << std::setw(44) << std::setfill('-') << " " << std::endl;
	std::cout << "|  INDEX   |  NOMBRE  | APELLIDO |   APODO  |" << std::endl;
	std::cout << "|" << std::setw(44) << std::setfill('-') << "|" << std::endl;
	for (int i = 0; i < this->cont; i++) {
		this->contactList[i].showInfo();
	}
	std::cout << " " << std::setw(44) << std::setfill('-') << " " << std::endl;
	std::cout <<""<< std::endl;
}

void PhoneBook::getContact(int num) {
	this->contactList[num].showAll();
}

int PhoneBook::getCont() {
	return (this->cont);
}

