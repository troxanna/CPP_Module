#include "Point.hpp"

Point::Point( const float x, const float y ) : x(x), y(y) {};

Point::Point( void ) : x(0), y(0) {};

Point::~Point() {};

const Fixed& Point::getX( void ) const
{
	return(this->x);
}

const Fixed& Point::getY( void ) const
{
	return(this->y);
}

Point::Point(const Point &other)
{
	this->x = other.getX();
    this->y = other.getY();
}

Point & Point::operator=(Point other)
{
	this->x = other.getX();
    this->y = other.getY();
	return (*this);
}
