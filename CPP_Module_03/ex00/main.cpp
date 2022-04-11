#include "ClapTrap.hpp"

int	main()
{
	ClapTrap test("Clap");
	test.beRepaired(2);
	test.attack("Trap");
	test.takeDamage(3);
	test.beRepaired(2);
	test.takeDamage(10);
	return (0);
}

