#pragma once
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

//а разве здесь делаем virtual? 


//class DiamondTrap: public virtual ScavTrap, virtual public FragTrap
class DiamondTrap: public ScavTrap, virtual FragTrap
{
private:
	DiamondTrap( void );
public:
	explicit DiamondTrap( std::string name );
	virtual ~DiamondTrap();
	void highFivesGuys();
	void whoAmI( void );
};
 