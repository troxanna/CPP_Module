#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "ClapTrap.hpp"
#include "DiamondTrap.hpp"

//DiamondTrap::DiamondTrap( std::string name ) : ScavTrap(name), FragTrap(name)
DiamondTrap::DiamondTrap( void ) : ClapTrap("DiamondTrap"), ScavTrap("DiamondTrap"), FragTrap("DiamondTrap"), _name("DiamondTrap")
{
	std::cout << "DiamondTrap constructor called\n";
}

DiamondTrap::DiamondTrap( std::string name ) : ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name), _name(name)
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
	std::cout << "Who am I?!" << std::endl;
}