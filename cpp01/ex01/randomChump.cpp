//
// Created by Andoni Fiat arriola on 1/7/23.
//

#include "Zombie.hpp"

void    randomChump( std::string name) {
	Zombie zombie = Zombie(name);
	zombie.announce();
}
