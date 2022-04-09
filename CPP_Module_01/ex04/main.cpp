#include "Sed.hpp"

void	print_error(std::string errMessage)
{
	std::cout << errMessage;	
}

int	main( int argc, char **argv )
{
	Sed test;
	if (argc != 4)
	{
		print_error("Invalid count of arguments\n");
		return (1);
	}
	if (!test.setFile(argv[1]) || !test.replace(argv[2], argv[3]))
	{
		print_error("Invalid file\n");
		return (1);
	}
	return (0);
}