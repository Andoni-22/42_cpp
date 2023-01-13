//
// Created by Andoni Fiat arriola on 1/7/23.
//

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>

class Zombie {
public:
	Zombie(void);
	Zombie(std::string name);
	~Zombie(void);
	void announce(void);
private:
	std::string name;
};

#endif
