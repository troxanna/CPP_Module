#include "ClapTrap.hpp"
#include "FragTrap.hpp"

FragTrap::FragTrap( std::string name ) : ClapTrap(name)
{
	std::cout << "Frag Trap " << getName() << " created\n";
	setHitPoints(100);
	setEnergyPoints(100);
	setDamage(30);
};

FragTrap::~FragTrap()
{
	std::cout << "Frag Trap " << getName() << " dead\n";
}

void FragTrap::highFivesGuys()
{
	std::cout << "Give me high five!\n";
}