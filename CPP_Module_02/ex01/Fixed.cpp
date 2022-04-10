#include "Fixed.hpp"

Fixed::Fixed( void ): value(0) 
{ 
	std::cout << "Default constructor called\n"; 
};

Fixed::Fixed( const int value ) : value(value << bits)
{ 
	std::cout << "Default constructor called\n"; 

};

Fixed::Fixed( const float value ) : value(static_cast<int>(roundf(((value) * (1 << bits)))))
{ 
	std::cout << "Default constructor called\n"; 

};

Fixed::Fixed(const Fixed & other)
{
	std::cout << "Copy constructor called\n";
	this->value = other.getRawBits();
}

Fixed & Fixed::operator=(Fixed other)
{
	std::cout << "Copy assignment operator called\n";
	this->value = other.getRawBits();
	return (*this);
}

Fixed::~Fixed( void )
{
	std::cout << "Destructor called\n";
}

int Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called\n";
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

std::ostream & operator<<(std::ostream &os, Fixed const& f)
{
	os << f.toFloat();
	return (os);
}
