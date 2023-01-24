#include "HumanB.hpp"

HumanB::HumanB(std::string name) : gun(nullptr) {
	this->name = name;
}

HumanB::~HumanB() {}

void HumanB::attack() {
	std::cout<<this->name<<" attacks with their "<<this->gun->get_type()<<std::endl;
}

void HumanB::setWeapon(Weapon &gun) {
	this->gun = &gun;
}