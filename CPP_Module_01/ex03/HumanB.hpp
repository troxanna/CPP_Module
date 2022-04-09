#pragma once

#include "Weapon.hpp"

class HumanB
{
private:
	std::string	name;
	Weapon	*w;

public:
	HumanB( std::string	name );
	~HumanB();
	void	attack( void );
	void	setWeapon( Weapon & w );
};