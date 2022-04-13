#include "DiamondTrap.hpp"

int	main()
{
	DiamondTrap diamond("Diamond");
	diamond.ScavTrap::attack(diamond.getName());
	diamond.takeDamage(30);
	diamond.getInfo();
	return (0);
}

