#include <iostream>

class Fixed
{
private:
	int	value;
	static const int bits = 8;
public:
	Fixed( void );
	Fixed(Fixed & other);
	Fixed & operator=(Fixed & other);
	~Fixed( void );
	int getRawBits( void ) const;
	void setRawBits( int const raw );
};
