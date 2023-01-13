//
// Created by Andoni Fiat arriola on 1/13/23.
//

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &gun) :
	name(name), gun(gun) {}

HumanA::~HumanA() {}

void HumanA::attack() {
	std::cout<<this->name<<" attacks with their "<<this->gun.get_type()<<std::endl;
}
