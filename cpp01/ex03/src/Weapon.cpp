//
// Created by Andoni Fiat arriola on 1/13/23.
//

#include "Weapon.hpp"

Weapon::Weapon(std::string type) {
	this->type = type;
}

Weapon::~Weapon() {}

int Weapon::setType(const std::string& type) {
	if (type == "")
		return (-1);
	this->type = type;
	return (0);
}

const std::string& Weapon::get_type() const {
	return (this->type);
};
