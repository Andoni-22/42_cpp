//
// Created by Andoni Fiat arriola on 1/7/23.
//

#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie() {
	return ;
}

Zombie::Zombie(std::string name) {
	this->name = name;
	return ;
}

Zombie::~Zombie() {
	std::cout<<this->name<<": DIED..."<<std::endl;
	return ;
}

void Zombie::announce() {
	std::cout<<this->name<<": BraiiiiiiinnnzzzZ..."<<std::endl;
}

void Zombie::setName(std::string name) {
	this->name = name;
}
