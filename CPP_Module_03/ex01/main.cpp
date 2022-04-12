#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main()
{
	ClapTrap clap("Clap");
	ScavTrap scav("Scav");
	clap.setDamage(50);
    clap.getInfo();
	scav.getInfo();
	clap.attack(scav.getName());
	scav.takeDamage(50);
	scav.getInfo();
    clap.getInfo();
    scav.beRepaired(50);
    scav.getInfo();
	clap.setDamage(110);
	clap.attack(scav.getName());
	scav.takeDamage(110);
	scav.getInfo();
	clap.attack(scav.getName());
	scav.takeDamage(110);
	scav.guardGate();
	return (0);
}

