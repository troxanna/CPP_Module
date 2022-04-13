#pragma once
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"


//class DiamondTrap: public virtual ScavTrap, virtual public FragTrap
class DiamondTrap: public ScavTrap, public FragTrap
{
private:
	std::string _name;
public:
	DiamondTrap( void );
	explicit DiamondTrap( std::string name );
	virtual ~DiamondTrap();
	void highFivesGuys();
	void whoAmI( void );
	
};
 