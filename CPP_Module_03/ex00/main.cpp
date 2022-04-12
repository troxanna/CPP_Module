#include "ClapTrap.hpp"

int	main()
{
	ClapTrap clap("Clap");
	ClapTrap trap("Trap");
    clap.setDamage(3);
    clap.getInfo();
	trap.getInfo();
	clap.attack(trap.getName());
	trap.takeDamage(3);
	trap.getInfo();
    clap.getInfo();
    trap.beRepaired(3);
    trap.getInfo();
	return (0);
}

