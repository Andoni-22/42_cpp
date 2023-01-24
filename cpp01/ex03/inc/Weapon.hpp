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
	void setType(const std::string name);
	const std::string& get_type();
};

#endif
