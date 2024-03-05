
#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
	private:
		int _value;
		static const int _fractionalBits = 8;
	public:
		Fixed();
		Fixed(const Fixed &fixed);

		Fixed(const int value);
		Fixed(const float value);

		~Fixed();

		Fixed &operator=(const Fixed &fixed);

		bool operator>(const Fixed &fixed);
		bool operator<(const Fixed &fixed);
		bool operator>=(const Fixed &fixed);
		bool operator<=(const Fixed &fixed);
		bool operator==(const Fixed &fixed);
		bool operator!=(const Fixed &fixed);

		float operator+(const Fixed &fixed);
		float operator-(const Fixed &fixed);
		float operator*(const Fixed &fixed);
		float operator/(const Fixed &fixed);

		Fixed &operator++(void);
		Fixed operator++(int);
		Fixed &operator--(void);
		Fixed operator--(int);

		int getRawBits(void) const;
		void setRawBits(int const raw);

		float toFloat(void) const;
		int toInt(void) const;

		static Fixed &min(Fixed &a, Fixed &b);
		static const Fixed &min(const Fixed &a, const Fixed &b);
		static Fixed &max(Fixed &a, Fixed &b);
		static const Fixed &max(const Fixed &a, const Fixed &b);
};

std::ostream &operator<<(std::ostream &o, Fixed const &fix);

#endif