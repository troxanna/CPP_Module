#pragma once

#include <iostream>
#include <string>
#include <iomanip>


class Contact
{
	public:
	Contact(): f_name(std::string()),
				l_name(std::string()),
				nickname(std::string()),
				p_number(std::string()),
				secret(std::string()), 
				id(0),
				last(false)
				{};
	~Contact() { };			
	std::string f_name;
	std::string l_name;
	std::string nickname;
	std::string p_number;
	std::string secret;

	const int & getId() { return this->id; }
	const bool & getLastItem() { return this->last; }
	void setId( int id ) { this->id = id; }
	void setLastItem( bool value ) { this->last = value; }

	private:
	int	id;
	bool	last;
};

class Phonebook
{
	public:
	Phonebook(size_t size = 8) : size(size), count(0) {};
	~Phonebook() { }

	void	add( void );
	void	print_list( void );
	void	print_contact( void );
	const int & getCount() { return this->count; }

	private:
	int	_lastItem( Contact (&list)[8] );
	std::string	_catString(std::string s);
	void	_clearBuff( void );
	void	_inputContact( Contact & item );
	size_t size;
	int	count;
	Contact list[8];
};


