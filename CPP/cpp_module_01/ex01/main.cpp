
#include "Zombie.hpp"

int main()
{
	Zombie* zombie = zombieHorde(5, "Zombie");
	delete[] zombie;
	return (0);
}
