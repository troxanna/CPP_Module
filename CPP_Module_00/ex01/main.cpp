#include <iostream>
#include <string>
#include "phonebook.h"



// void	add_contact()
// {

// }

// void	search_contact()
// {
	
// }

int	main(void)
{
	std::string input;
	Contact	contact;
	int	count;

	count = 0;
	while (1)
	{
		std::cin >> input;
		if (input == "EXIT")
			return (1);
		else if (input == "ADD")
		{
			std::cin >> contact.first_name >> contact.last_name
				>> contact.nickname >> contact.phone_number >> contact.darkest_secret;
			contact.id = ++count;
		}
		else if (input == "SEARCH")
		{
			std::cout << contact.id << std::endl;
			std::cout << contact.first_name << std::endl;
			std::cout << contact.last_name << std::endl;
			std::cout << contact.nickname << std::endl;
		}
	}
}
