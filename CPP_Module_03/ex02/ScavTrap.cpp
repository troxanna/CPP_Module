#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

ScavTrap::ScavTrap( std::string name ) : ClapTrap(name)
{
	std::cout << "Scav Trap " << get_name() << " created\n";
	set_hitPoints(100);
	set_energyPoints(50);
	set_damage(20);
};

ScavTrap::~ScavTrap()
{
	std::cout << "Scav Trap " << get_name() << " dead\n";
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap is now in Gate keeper mode\n";
}