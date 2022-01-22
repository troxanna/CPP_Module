#pragma once

#include <iostream>
#include <string>
#include <iomanip>

class Contact
{
	//public:
	// Contact(): f_name(0), l_name(0), nickname(0), p_number(0), secret(0)
	// {};
	public:
	Contact(): id(0) {};
	std::string f_name;
	std::string l_name;
	std::string nickname;
	std::string p_number;
	std::string secret;
	int	id;
};

class Phonebook
{
	public:
	Phonebook(size_t size = 8, int	width = 10) : size(size), width(width),
			count(0), list(new Contact [size])
	{};
	void	add();
	void	print_list();
	void	print_contact();

	size_t size;
	int	width;
	int	count;
	Contact *list;

	private:
	std::string	_cat_string(std::string s);
	int	_check_index();
};


