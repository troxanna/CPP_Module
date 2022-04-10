#include "Point.hpp"
#include "Fixed.hpp"

int main( void ) 
{
	const Point a(7.0f, 7.0f);
	const Point b(11.0f, 1.0f);
	const Point c(2.0f, 2.0f);
	const Point p(2.0f, 2.0f);


	bool result;
	result = bsp(a, b, c, p);
	if (result)
		std::cout << "Yes" << std::endl;
	else
		std::cout << "No" << std::endl;
	return 0;
}