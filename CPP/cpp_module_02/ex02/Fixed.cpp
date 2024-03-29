
#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->_value = 0;
}

Fixed::Fixed(const Fixed &fixed)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = fixed;
}

Fixed::Fixed(const int value)
{
	std::cout << "Int constructor called" << std::endl;
	this->_value = value << this->_fractionalBits;
}

Fixed::Fixed(const float value)
{
	std::cout << "Float constructor called" << std::endl;
	this->_value = roundf(value * (1 << this->_fractionalBits));
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &fixed)
{
	std::cout << "Assignation operator called" << std::endl;
	this->_value = fixed.getRawBits();
	return (*this);
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_value);
}

void Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->_value = raw;
}

float Fixed::toFloat(void) const
{
	return ((float)this->_value / (1 << this->_fractionalBits));
}

int Fixed::toInt(void) const
{
	return (this->_value >> this->_fractionalBits);
}

std::ostream &operator<<(std::ostream &out, const Fixed &fixed)
{
	out << fixed.toFloat();
	return (out);
}

bool Fixed::operator>(const Fixed &fixed)
{
	return (this->_value > fixed.getRawBits());
}

bool Fixed::operator<(const Fixed &fixed)
{
	return (this->_value < fixed.getRawBits());
}

bool Fixed::operator>=(const Fixed &fixed)
{
	return (this->_value >= fixed.getRawBits());
}

bool Fixed::operator<=(const Fixed &fixed)
{
	return (this->_value <= fixed.getRawBits());
}

bool Fixed::operator==(const Fixed &fixed)
{
	return (this->_value == fixed.getRawBits());
}

bool Fixed::operator!=(const Fixed &fixed)
{
	return (this->_value != fixed.getRawBits());
}

float Fixed::operator+(const Fixed &fixed)
{
	return (this->toFloat() + fixed.toFloat());
}

float Fixed::operator-(const Fixed &fixed)
{
	return (this->toFloat() - fixed.toFloat());
}

float Fixed::operator*(const Fixed &fixed)
{
	return (this->toFloat() * fixed.toFloat());
}

float Fixed::operator/(const Fixed &fixed)
{
	return (this->toFloat() / fixed.toFloat());
}

Fixed &Fixed::operator++(void)
{
	this->_value++;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed tmp(*this);
	operator++();
	return (tmp);
}

Fixed &Fixed::operator--(void)
{
	this->_value--;
	return (*this);
}

Fixed Fixed::operator--(int)
{
	Fixed tmp(*this);
	operator--();
	return (tmp);
}

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
	return ((a.toFloat() >= b.toFloat() ? b : a));
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b)
{
	return ((a.toFloat() >= b.toFloat() ? b : a));
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
	return ((a.toFloat() >= b.toFloat() ? a : b));
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b)
{
	return ((a.toFloat() >= b.toFloat() ? a : b));
}

