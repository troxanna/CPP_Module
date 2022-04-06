#include "Phonebook.hpp"

//Если добавляем 9 контакт, заменяем последний добавленный или самый старый из добавленных?
//Сохраненный контакт не может иметь пустых полей. Как это обработать можно в cin?
//Разобраться с форматированием в выводе контактов

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
