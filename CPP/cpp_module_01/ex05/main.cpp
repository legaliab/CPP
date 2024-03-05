
#include "Harl.hpp"

int main()
{
	std::cout << std::endl;
	Harl	harl;

	harl.complain("debug");
	harl.complain("info");
	harl.complain("warning");
	harl.complain("error");
	harl.complain("bob");
	return (0);
}
