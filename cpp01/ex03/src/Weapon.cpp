//
// Created by Andoni Fiat arriola on 1/13/23.
//

#include "Weapon.hpp"

Weapon::Weapon(std::string type): type(type){}

Weapon::~Weapon() {}

void Weapon::setType(const std::string type) {
	this->type = type;
}

const std::string& Weapon::get_type(){
	return (this->type);
};
