#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include <string>
#include <iostream>
#include "Contact.hpp"

class PhoneBook {
public:
	PhoneBook();
	~PhoneBook();
	int addContact(Contact contact);
	void getContact(int num);
	void showList();
	int getCont();


private:
	Contact contactList[8];
	int     oldest;
	int     cont;
};

#endif
