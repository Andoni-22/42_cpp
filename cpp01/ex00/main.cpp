
#include "Zombie.hpp"

Zombie  *newZombie(std::string name);
void    randomChump(std::string name);

int main(){
	Zombie *z = newZombie("Paco");
	z->announce();
	delete z;
	randomChump("TONTO 1");
	randomChump("TONTO 2");
	return (0);
}