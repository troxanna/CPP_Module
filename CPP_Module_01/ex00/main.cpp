#include "Zombie.hpp"

int	main( void )
{
	std::string name;
	Zombie	*z;

	std::cout << "Enter the name of the first zombie:\n";
	std::cin >> name;
	z = newZombie(name);
	z->announce();
	delete z;

	std::cout << "Enter the name of the second zombie:\n";
	std::cin >> name;
	randomChump(name);

	return (1);
}