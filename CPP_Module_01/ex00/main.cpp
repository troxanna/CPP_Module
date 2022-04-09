#include "Zombie.hpp"

int	clearString(std::string line)
{
	int len = line.length();
	for (int i = len - 1; i >= 0; --i) {
   		if(line[i] == ' ')
      		line.erase(i, 1);
	}
	return (line.length());
}

int	main( void )
{
	std::string name;
	Zombie	*z;

	std::cout << "Enter the name of the first zombie:\n";
	std::getline(std::cin, name);
	while (!(name.length()) || !clearString(name))
	{
		std::cout << "Empty value. Please, try again.\n";
		std::getline(std::cin, name);
	}
	z = newZombie(name);
	z->announce();
	delete z;

	std::cout << "Enter the name of the second zombie:\n";
	std::getline(std::cin, name);
	while (!(name.length()) || !clearString(name))
	{
		std::cout << "Empty value. Please, try again.\n";
		std::getline(std::cin, name);
	}
	randomChump(name);
	return (1);
}