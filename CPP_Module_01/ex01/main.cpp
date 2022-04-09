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

void	clearBuff( void )
{
	std::cin.clear();
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

int	main( void )
{
	Zombie	*z;
	std::string	name;
	int	count;

	std::cout << "Enter zombie name:\n";
	std::getline(std::cin, name);
	while (!(name.length()) || !clearString(name))
	{
		std::cout << "Empty value. Please, try again.\n";
		std::getline(std::cin, name);
	}
	std::cout << "Enter zombie count:\n";
	std::cin >> count;
	while (count < 1 || std::cin.fail())
	{
		clearBuff( );
		std::cout << "Invalid value. Please, try again.\n";
		std::cin >> count;
	}
	clearBuff( );
	z = zombieHorde(count, name);
	for (int i = 0; i < count; i++)
		z[i].announce();
	delete [] z;
	return (1);
}