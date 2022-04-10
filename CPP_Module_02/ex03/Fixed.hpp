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
	Fixed& operator++(); // версия префикс
    Fixed& operator--(); // версия префикс
    Fixed operator++(int); // версия постфикс
    Fixed operator--(int);
	static const Fixed & min(const Fixed & f1, const Fixed & f2);
	static const Fixed & max(const Fixed & f1, const Fixed & f2);
	static Fixed & min( Fixed & f1,  Fixed & f2 );
	static Fixed & max( Fixed & f1,  Fixed & f2 );

	bool operator> (int value);
	bool operator<= (int value);
	bool operator< (int value);
	bool operator>= (int value);
	bool operator== (int value);
	bool operator!= (int value);
};

std::ostream & operator<<(std::ostream &os, Fixed const& f);
bool operator> (const Fixed &f1, const Fixed &f2);
bool operator<= (const Fixed &f1, const Fixed &f2);
bool operator< (const Fixed &f1, const Fixed &f2);
bool operator>= (const Fixed &f1, const Fixed &f2);
bool operator== (const Fixed &f1, const Fixed &f2);
bool operator!= (const Fixed &f1, const Fixed &f2);
Fixed operator+(const Fixed &f1, const Fixed &f2);
Fixed operator-(const Fixed &f1, const Fixed &f2);
Fixed operator*(const Fixed &f1, const Fixed &f2);
Fixed operator/(const Fixed &f1, const Fixed &f2);