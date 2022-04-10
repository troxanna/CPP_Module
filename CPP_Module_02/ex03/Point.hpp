#pragma once
#include "Fixed.hpp"

// class Fixed; 

class Point
{
private:
    Fixed x;
    Fixed y;
public:
    Point( void );
    Point( const float x, const float y );
    ~Point();
    Point( const Point &other );
    Point & operator=(Point other);
    const Fixed& getX( void ) const;
    const Fixed& getY( void ) const;
};

bool bsp( Point const a, Point const b, Point const c, Point const point);

