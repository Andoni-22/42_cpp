//
// Created by Andoni Fiat arriola on 1/13/23.
//

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB {
private:
	std::string name;
	Weapon* gun;
public:
	HumanB(std::string name);
	~HumanB();
	void attack();
	void setWeapon(Weapon gun);
};


#endif
