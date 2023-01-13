
#include "Zombie.hpp"

Zombie  *newZombie(std::string name);
void    randomChump(std::string name);
Zombie* zombieHorde(int N, std::string name);

int main(){
	Zombie *list = zombieHorde(8, "zombie");
	for(int i = 0; i < 8; i++) {
		list[i].announce();
	}
	delete [] list;
	return (0);
}