
#include "Zombie.hpp"

int main() 
{
	Zombie *zombie = newZombie("Zombie");
	randomChump("Chump");
	delete zombie;
	return 0;
}