
#include "FragTrap.hpp"

int main()
{
	FragTrap fragtrap("Fragtrap");
	FragTrap fragtrap2("Fragtrap2");

	fragtrap.attack("Fragtrap2");
	fragtrap2.takeDamage(10);
	fragtrap2.beRepaired(5);
	fragtrap2.attack("Fragtrap");
	fragtrap.takeDamage(10);
	fragtrap.beRepaired(5);
	fragtrap.highFivesGuys();
	return (0);
}
