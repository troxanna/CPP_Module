#include "ClapTrap.hpp"

class ScavTrap: public  ClapTrap
{
private:
	ScavTrap(/* args */);
public:
	ScavTrap( std::string name );
	ScavTrap & operator=( const ScavTrap &other );
	ScavTrap( const ScavTrap & other );
	~ScavTrap();
	void guardGate();
};
 