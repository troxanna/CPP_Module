#pragma once
#include <iostream>
# include <cmath>

class Fixed
{
private:
	int	value;
	static const int bits = 8;
public:
	Fixed( void );
	explicit Fixed( const int value );
	explicit Fixed( const float value );
	Fixed(const Fixed & other);
	Fixed & operator=(Fixed other);
	~Fixed( void );
	int getRawBits( void ) const;
	void setRawBits( int const raw );
	int toInt(void) const;
	float toFloat(void) const;
};

std::ostream & operator<<(std::ostream &os, Fixed const& f);
