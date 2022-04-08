#include "Phonebook.hpp"

void	Phonebook::_clearBuff( void )
{
	std::cin.clear();
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

int	Phonebook::_lastItem( Contact (&list)[8] )
{
	int	i = 0;

	while (i < (int)this->size - 1)
	{
		if(list[i].getLastItem())
		{
			list[i].setLastItem(false);
			list[i + 1].setLastItem(true);
			return (list[i].getId());
		}
		i++;
	}
	if (list[i].getLastItem())
	list[(int)this->size - 1].setLastItem(false);
	list[0].setLastItem(true);
	return (i);
}

void	Phonebook::_inputContact( Contact & item )
{
	std::cout << "First name: ";
	std::cin >> item.f_name;
	_clearBuff( );
	std::cout << "Last name: ";
	std::cin >> item.l_name;
	_clearBuff( );
	std::cout << "Nickname: ";
	std::cin >> item.nickname;
	_clearBuff( );
	std::cout << "Phone number: ";
	std::cin >> item.p_number;
	_clearBuff( );
	std::cout << "Darkset secret: ";
	std::cin >> item.secret;
	_clearBuff( );
}

void	Phonebook::add( void )
{
	int	index;

	if (this->count < (int)this->size)
	{
		this->list[count].setId( count );
		if (this->count == 0)
			list[0].setLastItem(true);
		index = this->count;
		this->count++;
	}
	else
		index = this->_lastItem(this->list);
	_inputContact( this->list[index] );
}

std::string	Phonebook::_catString(std::string s)
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
	std::cout << std::setw((10 * 4) + 6) << std::cout.fill('-');
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
		std::cout << "|" << std::setw(10) << this->list[i].getId() + 1 << "|";
		std::cout << std::setw(10) << this->_catString(this->list[i].f_name) << "|";
		std::cout << std::setw(10) << this->_catString(this->list[i].l_name) << "|";
		std::cout << std::setw(10) << this->_catString(this->list[i].nickname) << "|";
		std::cout << '\n';
	}
}

void	Phonebook::print_contact( void )
{
	long	index;

	std::cout << "Enter index: \n";
	std::cin >> index;
	if (index < 1 || index > this->count || std::cin.fail())
	{
		_clearBuff( );
		std::cout << "Invalid index. Please, try again.\n";
		this->print_contact();
	}
	else
	{
		std::cout << std::endl;
		--index;
		std::cout << "First name: " << this->list[index].f_name << std::endl;
		std::cout << "Last name: " << this->list[index].l_name << std::endl;
		std::cout << "Nickname: " << this->list[index].nickname << std::endl;
		std::cout << "Phone number: " << this->list[index].p_number << std::endl;
		std::cout << "Darkset secret: " << this->list[index].secret << std::endl;
	}

}