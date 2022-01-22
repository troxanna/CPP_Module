#include "phonebook.h"

// void	Phonebook::add(std::string f_name, std::string l_name,
// 	std::string nickname, std::string p_number, std::string secret)
void	Phonebook::add()
{
	if (count == (int)this->size - 1)
		count--;
	std::cout << "First name: ";
	std::cin >> this->list[count].f_name;
	std::cout << "Last name: ";
	std::cin >> this->list[count].l_name;
	std::cout << "Nickname: ";
	std::cin >> this->list[count].nickname;
	std::cout << "Phone number: ";
	std::cin >> this->list[count].p_number;
	std::cout << "Darkset secret: ";
	std::cin >> this->list[count].secret;
	this->list[count].id = count + 1;
	count++;
}

std::string	Phonebook::_cat_string(std::string s)
{
	std::string result;
	if (s.size() > 10)
		result = s.substr(0, 9) + ".";
	else
		return (s);
	return(result);
	
}

void	Phonebook::print_list()
{
	std::cout.width((this->width * 4) + 6);
	std::cout.fill('-');
	std::cout << '\n';
	std::cout.fill(' ');
	std::cout << "|" << std::setw(10) << "Index" << "|";
	std::cout << std::setw(10) << "First name" << "|";
	std::cout << std::setw(10) << "Last name" << "|";
	std::cout << std::setw(10) << "Nickname" << "|";
	std::cout << '\n';
	for (int i = 0; i < this->count; i++)
	{
		std::cout.fill(' ');
		std::cout << "|" << std::setw(10) << this->list[i].id << "|";
		std::cout << std::setw(10) << this->_cat_string(this->list[i].f_name) << "|";
		std::cout << std::setw(10) << this->_cat_string(this->list[i].l_name) << "|";
		std::cout << std::setw(10) << this->_cat_string(this->list[i].nickname) << "|";
		std::cout << '\n';
	}
}

int	Phonebook::_check_index()
{
	int	index;

	std::cout << "Enter index: \n";
	std::cin >> index;
	for (int i = 1; i < (int)this->size; i++)
		if (this->list[i].id == index)
			return (index);
	return (0);
}

void	Phonebook::print_contact()
{
	int	index;

	index = this->_check_index();
	if (!index)
		return ;
	std::cout << std::endl;
	std::cout << "First name: " << this->list[index - 1].f_name << std::endl;
	std::cout << "Last name: " << this->list[index - 1].l_name << std::endl;
	std::cout << "Nickname: " << this->list[index - 1].nickname << std::endl;
	std::cout << "Phone number: " << this->list[index - 1].p_number << std::endl;
	std::cout << "Darkset secret: " << this->list[index - 1].secret << std::endl;

}