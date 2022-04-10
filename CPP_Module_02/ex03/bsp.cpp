#include "Point.hpp"
//#include "Fixed.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
    Fixed v1, v2, v3;

    v1 = (a.getX() - point.getX()) * (b.getY() - a.getY()) - (b.getX() - a.getX()) * (a.getY() - point.getY());
    v2 = (b.getX() - point.getX()) * (c.getY() - b.getY()) - (c.getX() - b.getX()) * (b.getY() - point.getY());
    v3 = (c.getX() - point.getX()) * (a.getY() - c.getY()) - (a.getX() - c.getX()) * (c.getY() - point.getY());

    if ((v1 > 0 && v2 > 0 && v3 > 0) || (v1 < 0 && v2 < 0 && v3 < 0))
        return (true);
    return (false);
}
