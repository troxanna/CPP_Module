#include "phonebook.h"


int	main(void)
{
	Phonebook book;
	std::string input;

	while (1)
	{
		std::cout << "Enter ADD, SEARCH of EXIT: \n";
		std::cin >> input;
		if (input == "EXIT")
			return (1);
		else if (input == "ADD")
			book.add();
		else if (input == "SEARCH")
		{
			book.print_list();
			book.print_contact();
		}
		else
			std::cout << "Unknown command. Please, try again.";
		std::cout << std::endl;
	}
}
