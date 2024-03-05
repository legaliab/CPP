
#include "ClapTrap.hpp"

int main()
{
	ClapTrap claptrap("Claptrap");
	ClapTrap claptrap2("Claptrap2");

	claptrap.attack("Claptrap2");
	claptrap2.takeDamage(10);
	claptrap2.beRepaired(5);
	claptrap2.attack("Claptrap");
	claptrap.takeDamage(10);
	claptrap.beRepaired(5);
	return (0);
}