
#include "HumanB.hpp"

HumanB::HumanB(std::string name, Weapon &type) : _name(name), _weapon(type)
{
	std::cout << "\x1B[32m";
	std::cout << name << " born" << std::endl;
	std:: cout << "\x1B[0m";
}

HumanB::~HumanB()
{
	std::cout << "\x1B[31m";
	std::cout << this->_name << " has died" << std::endl;
	std:: cout << "\x1B[0m";
}

void	HumanB::setWeapon(Weapon &type)
{
	this->_weapon = type;
}

void	HumanB::attack(void)
{
	std::cout << this->_name << " attacks with his " << this->_weapon.getType() << std::endl;
}