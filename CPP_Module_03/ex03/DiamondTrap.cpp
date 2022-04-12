#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "ClapTrap.hpp"
#include "DiamondTrap.hpp"

//DiamondTrap::DiamondTrap( std::string name ) : ScavTrap(name), FragTrap(name)
DiamondTrap::DiamondTrap( std::string name ) : name(name + "_clap_name"), ClapTrap(name), ScavTrap(name), FragTrap(name)
{
	std::cout << "Diamond Trap " << ClapTrap::getName() << " created\n";
	FragTrap::setHitPoints(FragTrap::getHitPoints());
	ScavTrap::setEnergyPoints(ScavTrap::getEnergyPoints());
 	FragTrap::setDamage(FragTrap::getDamage());
};

DiamondTrap::~DiamondTrap()
{
	std::cout << "Diamond Trap " << ClapTrap::getName() << " dead\n";
}

void DiamondTrap::whoAmI( void )
{
	std::cout << "DiamondTrap is now in Gate keeper mode\n";
}