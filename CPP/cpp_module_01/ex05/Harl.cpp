
#include "Harl.hpp"

Harl::Harl(void)
{
	std::cout << "Harl enters restaurant" << std::endl;
	std::cout << "* Whining Starts *" << std::endl << std::endl;
}

Harl::~Harl(void)
{
	std::cout << "Harl leaves restaurant" << std::endl;
	std::cout << "* Whining Stops *" << std::endl << std::endl;
}

void	Harl::complain(std::string level)
{
	if (level == "debug")
		this->debug();
	else if (level == "info")
		this->info();
	else if (level == "warning")
		this->warning();
	else if (level == "error")
		this->error();
	else
		std::cout << "I don't know what you're talking about." << std::endl << std::endl;
}

void	Harl::debug(void)
{
	std::cout
		<< "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!"
		<< std::endl
		<< std::endl;
}

void	Harl::info(void)
{
	std::cout << "I just love the smell of bacon in the morning." << std::endl << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "I think I'm allergic to bacon. Can I get a burger without bacon?" << std::endl << std::endl;
}

void	Harl::error(void)
{
	std::cout << "This is unacceptable. I want to speak to the manager now." << std::endl << std::endl;
}

