//
// Created by Andoni Fiat arriola on 1/11/23.
//

#include <Zombie.hpp>
#include <iostream>

Zombie* zombieHorde(int N, std::string name) {
	Zombie  *zombieList = new Zombie[N];

	for (int i = 0; i < N; i++) {
		zombieList[i].setName(name + std::to_string(i));
	}
	return (zombieList);
}