#include "Phonebook.hpp"

// void	Phonebook::add(std::string f_name, std::string l_name,
// 	std::string nickname, std::string p_number, std::string secret)
void	Phonebook::add( void )
{
	if (this->count == (int)this->size)
		this->count--;
	this->count++;
	std::cout << "First name: ";
	std::cin >> this->list[count - 1].f_name;
	std::cout << "Last name: ";
	std::cin >> this->list[count - 1].l_name;
	std::cout << "Nickname: ";
	std::cin >> this->list[count - 1].nickname;
	std::cout << "Phone number: ";
	std::cin >> this->list[count - 1].p_number;
	std::cout << "Darkset secret: ";
	std::cin >> this->list[count - 1].secret;
	this->list[count - 1].setId(count);
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

void	Phonebook::print_list( void )
{
	std::cout.width((10 * 4) + 6);
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
		std::cout << "|" << std::setw(10) << this->list[i].getId() << "|";
		std::cout << std::setw(10) << this->_cat_string(this->list[i].f_name) << "|";
		std::cout << std::setw(10) << this->_cat_string(this->list[i].l_name) << "|";
		std::cout << std::setw(10) << this->_cat_string(this->list[i].nickname) << "|";
		std::cout << '\n';
	}
}

void	Phonebook::print_contact( void )
{
	long	index;

	std::cout << "Enter index: \n";
	std::cin >> index;
	if (index < this->count || index > this->count || std::cin.fail())
	{
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cout << "Invalid index. Please, try again.\n";
		this->print_contact();
	}
	std::cout << std::endl;
	--index;
	std::cout << "First name: " << this->list[index].f_name << std::endl;
	std::cout << "Last name: " << this->list[index].l_name << std::endl;
	std::cout << "Nickname: " << this->list[index].nickname << std::endl;
	std::cout << "Phone number: " << this->list[index].p_number << std::endl;
	std::cout << "Darkset secret: " << this->list[index].secret << std::endl;

}