
#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << "FragTrap constructor called" << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
}

FragTrap::FragTrap(const FragTrap &fragTrap)
{
	std::cout << "FragTrap copy constructor called" << std::endl;
	*this = fragTrap;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &fragTrap)
{
	std::cout << "FragTrap assignation operator called" << std::endl;
	this->_hitPoints = fragTrap._hitPoints;
	this->_energyPoints = fragTrap._energyPoints;
	this->_name = fragTrap._name;
	return (*this);
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << this->_name << " requests a high five" << std::endl;
}
