#pragma once

#include <iostream>
#include <string>

//typedef void (Harl::*ptrFunc)();

class Harl
{

private:
	void	debug( void );
	void	info( void );
	void	warning( void );
	void	error( void );
	void (Harl::*ptrFunc[4])();
	static std::string levels[4];

public:
	void complain( const std::string& level );
	Harl( void );
	~Harl() {};
};
