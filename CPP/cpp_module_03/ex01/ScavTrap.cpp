
#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << "ScavTrap default constructor" << std::endl;
}

ScavTrap::ScavTrap(std::string name)
{
	std::cout << "ScavTrap name constructor" << std::endl;
	this->_name = name;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &scavTrap)
{
	std::cout << "ScavTrap copy constructor" << std::endl;
	*this = scavTrap;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &scavTrap)
{
	std::cout << "ScavTrap assignation operator" << std::endl;
	this->_hitPoints = scavTrap._hitPoints;
	this->_energyPoints = scavTrap._energyPoints;
	this->_name = scavTrap._name;
	return (*this);
}

void ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap " << this->_name << " has entered in Gate keeper mode" << std::endl;
}
