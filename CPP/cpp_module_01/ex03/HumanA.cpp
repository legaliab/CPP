
#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &type) : _name(name), _weapon(type)
{
	std::cout << "\x1B[32m";
	std::cout << name << " born" << std::endl;
	std:: cout << "\x1B[0m";
}

HumanA::~HumanA()
{
	std::cout << "\x1B[31m";
	std::cout << this->_name << " has died" << std::endl;
	std:: cout << "\x1B[0m";
}

void	HumanA::attack(void) const
{
	std::cout << this->_name << " attacks with his " << this->_weapon.getType() << std::endl;
}
