//
// Created by Andoni Fiat arriola on 1/13/23.
//

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : name(name){}

HumanB::~HumanB() {}

void HumanB::attack() {
	std::cout<<this->name<<" attacks with their "<<this->gun->get_type()<<std::endl;
}

void HumanB::setWeapon(Weapon gun) {
	this->gun->setType(gun.get_type());
}