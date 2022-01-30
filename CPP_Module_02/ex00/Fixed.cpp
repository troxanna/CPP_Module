#include "Fixed.hpp"

Fixed::Fixed( void ): value(0) 
{ 
	std::cout << "Default constructor called\n"; 
};

Fixed::Fixed(Fixed & other)
{
	std::cout << "Copy constructor called\n";
	this->value = other.getRawBits();
}

Fixed & Fixed::operator=(Fixed & other)
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