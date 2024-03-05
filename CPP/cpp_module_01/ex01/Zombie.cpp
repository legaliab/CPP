
#include "Zombie.hpp"

Zombie::Zombie()
{
	std::cout << "\x1B[32m";
	std::cout << "Constructing Zombie: " << this->_name << ": I'm alive!" << std::endl;
	std::cout << "\x1B[0m";
}

void	Zombie::setName(std::string name)
{
	this->_name = name;
}

void	Zombie::announce(void) const
{
	std::cout << "<" << this->_name << "> BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie()
{
	std::cout << "\x1B[31m";
	std::cout << "Destructing Zombie: " << this->_name << ": Back to the grave!" << std::endl;
	std::cout << "\x1B[0m";
}
