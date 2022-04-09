#pragma once

#include "Weapon.hpp"

class HumanA
{
private:
	std::string	name;
	Weapon	*w;

public:
	HumanA( std::string	name, Weapon & w );
	~HumanA();
	void	attack( void );
	void	setWeapon( Weapon & w );
};

