
#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
	Weapon		club = Weapon("crude spiked club");
	Weapon		club2 = Weapon("crude spiked club");
	HumanA		bob("Bob", club);
	HumanB		jim("Jim", club2);

	bob.attack();
	jim.attack();
	club.setType("some other type of club");
	bob.attack();
	jim.attack();
	return (0);
}