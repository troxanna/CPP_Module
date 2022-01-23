#pragma once

#include <iostream>
#include <string>

class Weapon
{
private:
	std::string type;
public:
	Weapon( void ) : type(std::string()) {};
	Weapon( std::string name ) : type(name) {};
	~Weapon() {};

	const std::string	&getType( void ) const { return (this->type); };
	void	setType( std::string & type ) { this->type = type; };
	void	setType( const std::string & type ) { this->type = type; };
};

