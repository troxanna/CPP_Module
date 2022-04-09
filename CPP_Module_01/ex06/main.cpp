#include "Harl.hpp"


bool	checkInput(char **argv, int argc)
{
	if (argc != 2 || !argv[1])
	{
		std::cout << "Error. Invalid input\n";
		return (false);
	}	
	return (true);
}

int	main( int argc, char **argv )
{
	Harl a;

	if (!checkInput(argv, argc))
		return (0);
	a.complain(argv[1]);
	return (0);
}