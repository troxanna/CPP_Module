#pragma once
#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
private:
	ScavTrap( void );
public:
	explicit ScavTrap( std::string name );
	virtual ~ScavTrap();
	void guardGate();
};
 