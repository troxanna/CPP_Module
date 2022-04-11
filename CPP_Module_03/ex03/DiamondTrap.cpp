#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "ClapTrap.hpp"
#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap( std::string name ) : ScavTrap(name), FragTrap(name)
{
	std::cout << "Diamond Trap " << ClapTrap::get_name() << " created\n";
	FragTrap::set_hitPoints(FragTrap::get_hitPoints());
	ScavTrap::set_energyPoints(ScavTrap::get_energyPoints());
 	FragTrap::set_damage(FragTrap::get_damage());
};

DiamondTrap::~DiamondTrap()
{
	std::cout << "Diamond Trap " << ClapTrap::get_name() << " dead\n";
}

void DiamondTrap::whoAmI( void )
{
	std::cout << "DiamondTrap is now in Gate keeper mode\n";
}