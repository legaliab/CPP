
#include "Fixed.hpp"

int main()
{
	#include <iostream> // Include the necessary header file

	Fixed a;
	Fixed const b(10);
	Fixed const c(42.42f);
	Fixed const d(b);

	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "c is " << c << std::endl;
	std::cout << "d is " << d << std::endl;

	if (a > b)
		std::cout << "a is greater than b" << std::endl;
	if (a < b)
		std::cout << "a is less than b" << std::endl;
	if (a >= b)
		std::cout << "a is greater than or equal to b" << std::endl;
	if (a <= b)
		std::cout << "a is less than or equal to b" << std::endl;
	if (a == b)
		std::cout << "a is equal to b" << std::endl;
	if (a != b)
		std::cout << "a is not equal to b" << std::endl;

	std::cout << "a + b = " << a + b << std::endl;
	std::cout << "a - b = " << a - b << std::endl;
	std::cout << "a * b = " << a * b << std::endl;
	std::cout << "a / b = " << a / b << std::endl;

	std::cout << "a++ = " << a++ << std::endl;
	std::cout << "++a = " << ++a << std::endl;
	std::cout << "a-- = " << a-- << std::endl;
	std::cout << "--a = " << --a << std::endl;

	std::cout << "a.toInt() = " << a.toInt() << std::endl;
	std::cout << "a.toFloat() = " << a.toFloat() << std::endl;

	return (0);
}