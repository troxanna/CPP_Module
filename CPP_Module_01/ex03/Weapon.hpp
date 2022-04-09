#pragma once

#include <iostream>
#include <string>

class Weapon
{
private:
	std::string type;
public:
	Weapon( void );
	Weapon( std::string name );
	~Weapon();

	const std::string	&getType( void ) const;
	void	setType( std::string type );
};

