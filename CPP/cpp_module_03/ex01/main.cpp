
#include "ScavTrap.hpp"

int main()
{
	ScavTrap scavtrap("Scavtrap");
	ScavTrap scavtrap2("Scavtrap2");

	scavtrap.attack("Scavtrap2");
	scavtrap2.takeDamage(10);
	scavtrap2.beRepaired(5);
	scavtrap2.attack("Scavtrap");
	scavtrap.takeDamage(10);
	scavtrap.beRepaired(5);
	scavtrap.guardGate();
	return (0);
}
