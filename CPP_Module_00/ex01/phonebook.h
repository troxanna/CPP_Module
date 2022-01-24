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
	Contact(): 
	f_name(std::string()),
	l_name(std::string()),
	nickname(std::string()),
	p_number(std::string()),
	secret(std::string()), 
	id(0)
	{};
	std::string f_name;
	std::string l_name;
	std::string nickname;
	std::string p_number;
	std::string secret;

	const int & getId() { return this->id; }
	void setId( int id ) { this->id = id; }

	private:
	int	id;
};

class Phonebook
{
	public:
	Phonebook(size_t size = 8) : size(size),
			count(0), list(new Contact [size])
	{};
	~Phonebook() { delete [] list; }

	void	add( void );
	void	print_list( void );
	void	print_contact( void );

	private:
	std::string	_cat_string(std::string s);
	size_t size;
	int	count;
	Contact *list;
};


