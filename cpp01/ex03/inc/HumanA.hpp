//
// Created by Andoni Fiat arriola on 1/13/23.
//

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class HumanA {
private:
	std::string name;
	Weapon &gun;
public:
	HumanA(std::string name, Weapon &gun);
	~HumanA(void);
	void attack(void);
};


#endif
