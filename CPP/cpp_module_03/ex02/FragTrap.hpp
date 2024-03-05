
#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include <iostream>
#include "ScavTrap.hpp"

class FragTrap : public ScavTrap, public ClapTrap
{
	private:
		std::string _name;
		unsigned int _hitPoints;
		unsigned int _energyPoints;
		unsigned int _attackDamage;

	public:
		FragTrap();
		FragTrap(std::string name);
		FragTrap(const FragTrap &fragTrap);
		~FragTrap();

		FragTrap &operator=(const FragTrap &fragTrap);

		void highFivesGuys(void);
};

#endif