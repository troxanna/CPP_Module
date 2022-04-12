#include "ClapTrap.hpp"
#include "FragTrap.hpp"

int	main()
{
	ClapTrap clap("Clap");
	FragTrap frag("Frag");
    frag.getInfo();
	clap.getInfo();
	frag.attack(clap.getName());
	clap.takeDamage(30);
	clap.getInfo();
    frag.getInfo();
    clap.beRepaired(30);
    clap.getInfo();
	frag.setDamage(110);
	frag.attack(clap.getName());
	clap.takeDamage(110);
	clap.getInfo();
	frag.attack(clap.getName());
	clap.takeDamage(110);
	frag.highFivesGuys();
	return (0);
}

