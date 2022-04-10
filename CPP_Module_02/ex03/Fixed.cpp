#include "Fixed.hpp"

Fixed::Fixed( void ): value(0) 
{ };

Fixed::Fixed( const int value ) 
{ 
	this->value = value << bits;
};

Fixed::Fixed( const float value )
{ 
	this->value = static_cast<int>(roundf(((value) * (1 << bits))));
};

Fixed::Fixed(const Fixed & other)
{
	this->value = other.getRawBits();
}

Fixed & Fixed::operator=(Fixed other)
{
	this->value = other.getRawBits();
	return (*this);
}

Fixed::~Fixed( void )
{ }

int Fixed::getRawBits( void ) const
{
	return(this->value);
}

void Fixed::setRawBits( int const raw )
{
	this->value = raw;
}

int Fixed::toInt(void) const{
	return (value >> bits);
}

float Fixed::toFloat(void) const{
	return (static_cast<float>(value) / (1 << bits));
}

Fixed& Fixed::operator++()
{
    this->setRawBits(this->getRawBits() + 1);
 
    return *this;
}
 
Fixed& Fixed::operator--()
{
    this->setRawBits(this->getRawBits() - 1);
 
    return *this;
}
 
Fixed Fixed::operator++(int)
{
	Fixed temp(*this);
 
     ++(*this); 
    return temp;
}
 
Fixed Fixed::operator--(int)
{
    Fixed temp(*this);
     --(*this); 

    return temp; 
}

std::ostream & operator<<(std::ostream &os, Fixed const& f)
{
	os << f.toFloat();
	return (os);
}

bool operator> (const Fixed &f1, const Fixed &f2)
{
    return f1.toFloat() > f2.toFloat();
}

bool operator< (const Fixed &f1, const Fixed &f2)
{
     return f1.toFloat() < f2.toFloat();
}
 
bool operator>= (const Fixed &f1, const Fixed &f2)
{
    return f1 < f2;
}
 
bool operator<= (const Fixed &f1, const Fixed &f2)
{
    return f1 > f2;
}

bool operator== (const Fixed &f1, const Fixed &f2)
{
    return (f1.toFloat() == f2.toFloat());
}
 
bool operator!= (const Fixed &f1, const Fixed &f2)
{
    return !(f1== f2);
}

Fixed operator+(const Fixed &f1, const Fixed &f2)
{
	return Fixed(f1.toFloat() + f2.toFloat());
}

Fixed operator-(const Fixed &f1, const Fixed &f2)
{
	return Fixed(f1.toFloat() - f2.toFloat());
}

Fixed operator*(const Fixed &f1, const Fixed &f2)
{
	return Fixed(f1.toFloat() * f2.toFloat());
}

Fixed operator/(const Fixed &f1, const Fixed &f2)
{
	return Fixed(f1.toFloat() / f2.toFloat());
}

const Fixed & Fixed::min(const Fixed & f1, const Fixed & f2)
{
	if (f1 > f2)
		return (f2);
	else
		return (f1);
}

const Fixed & Fixed::max(const Fixed & f1, const Fixed & f2)
{
	if (f1 > f2)
		return (f1);
	else
		return (f2);
}

Fixed & Fixed::min(Fixed & f1, Fixed & f2)
{
	if (f1 > f2)
		return (f2);
	else
		return (f1);
}

Fixed & Fixed::max(Fixed & f1, Fixed & f2)
{
	if (f1 > f2)
		return (f1);
	else
		return (f2);
}

bool Fixed::operator> (int value)
{
    return this->toFloat() > static_cast<float>(value);
}

bool Fixed::operator< (int value)
{
     return this->toFloat() < static_cast<float>(value);
}
 
bool Fixed::operator>= (int value)
{
    return this->toFloat() >= static_cast<float>(value);
}
 
bool Fixed::operator<= (int value)
{
    return this->toFloat() <= static_cast<float>(value);
}

bool Fixed::operator== (int value)
{
    return (this->toFloat() == static_cast<float>(value));
}
 
bool Fixed::operator!= (int value)
{
    return !(this->toFloat() == static_cast<float>(value));
}