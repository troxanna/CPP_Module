#include "ClapTrap.hpp"
#include "FragTrap.hpp"

FragTrap::FragTrap( std::string name ) : ClapTrap(name)
{
	std::cout << "Frag Trap " << get_name() << " created\n";
	set_hitPoints(100);
	set_energyPoints(100);
	set_damage(30);
};

FragTrap::~FragTrap()
{
	std::cout << "Frag Trap " << get_name() << " dead\n";
}

void FragTrap::highFivesGuys()
{
	std::cout << "Give me high five!\n";
}