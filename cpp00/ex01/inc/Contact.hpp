#ifndef CONTACT_H
#define CONTACT_H

#include <string>
#include <iostream>

class Contact {
public:
	Contact();
	Contact(std::string, std::string, std::string,
			int, std::string);
	~Contact();
	void setId(int id);
	int getId();
	void showInfo();
	void showAll();
private:
	int         id;
	std::string firstName;
	std::string lastName;
	std::string nickName;
	int         phoneNumber;
	std::string darkestSecret;
};

#endif
