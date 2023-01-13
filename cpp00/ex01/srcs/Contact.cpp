#include "Contact.hpp"
#include <string>
#include <iostream>
#include <iomanip>


Contact::Contact() {
	return ;
}

Contact::~Contact() {
	return;
}

Contact::Contact(std::string firstName, std::string lastName, std::string nickName,
				 int phoneNumber, std::string darkestSecret) {
	this->firstName = firstName;
	this->lastName = lastName;
	this->nickName = nickName;
	this->phoneNumber = phoneNumber;
	this->darkestSecret = darkestSecret;
}

void Contact::setId(int id) {
	this->id = id;
}

int Contact::getId() {
	return (this->id);
}

//TODO set text format
void Contact::showInfo() {
	std::cout<<this->id<<" | "<<this->firstName<<" | "<<this->lastName<<" | "<<this->nickName<<std::endl;
}

//TODO set text format
void Contact::showAll() {
	std::cout<<"ID: "<<this->id<<std::endl;
	std::cout<<"First name: "<<this->firstName<<std::endl;
	std::cout<<"Last name: "<<this->lastName<<std::endl;
	std::cout<<"Nick name: "<<this->nickName<<std::endl;
	std::cout<<"Phone number: "<<this->phoneNumber<<std::endl;
	std::cout<<"Darkest secret: "<<this->darkestSecret<<std::endl;
}
