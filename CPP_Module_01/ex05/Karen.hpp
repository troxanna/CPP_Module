#pragma once

#include <iostream>
#include <string>

//typedef void (Karen::*ptrFunc)();

class Karen
{

private:
	void	debug( void );
	void	info( void );
	void	warning( void );
	void	error( void );
	void (Karen::*ptrFunc[4])();

public:
	static std::string levels[4];
	void complain( const std::string& level );
	Karen( void );
	~Karen() {};
};
