#pragma once
#include "ClapTrap.hpp"

class FragTrap: virtual public ClapTrap
{
private:
	FragTrap( void );
public:
	explicit FragTrap( std::string name );
	virtual ~FragTrap();
	void highFivesGuys();
};
 