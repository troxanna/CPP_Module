#include "Zombie.hpp"

int	main( void )
{
	Zombie	*z;
	std::string	name;
	int	count;

	std::cout << "Enter zombie name:\n";
	std::cin >> name;
	std::cout << "Enter zombie count:\n";
	std::cin >> count;
	z = zombieHorde(count, name);

	for (int i = 0; i < count; i++)
		z[i].announce();
	delete [] z;
	return (1);
}