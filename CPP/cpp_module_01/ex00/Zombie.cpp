
#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
	std::cout << "\x1B[32m";
	std::cout << "Constructing a Zombie: " << name << ": better run!" << std::endl;
	std::cout << "\x1B[0m";
	this->_name = name;
}

Zombie::~Zombie()
{
	std::cout << "\x1B[31m";
	std::cout << "Destructing a Zombie: " << this->_name << ": I'll be back!" << std::endl;
	std::cout << "\x1B[0m";
}

void	Zombie::announce(void) const
{
	std::cout << "\x1B[32m";
	std::cout << this->_name << ": Braiiiiiiinnnssss..." << std::endl;
	std::cout << "\x1B[0m";
}