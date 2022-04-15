#include "iter.hpp"

int	main( void )
{
	{
		int array[] = {1, 2, 3, 4, 5, 6};
		size_t size = sizeof(array) / sizeof(int);
		iter(array, size, printItem);
	}
	// std::cout << std::endl;
	// {
	// 	int tab[] = {0, 1, 2, 3, 4};
	// 	Awesome tab2[5];
	// 	iter(tab, 5, printItem);
	// 	iter(tab2, 5, printItem);
	// }
}