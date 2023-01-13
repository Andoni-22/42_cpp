//
// Created by Andoni Fiat arriola on 1/13/23.
//

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>
#include <iostream>

class Weapon {
private:
	std::string type;
public:
	Weapon(std::string type);
	~Weapon();
	int setType(const std::string& name);
	const std::string& get_type() const;
};

#endif
