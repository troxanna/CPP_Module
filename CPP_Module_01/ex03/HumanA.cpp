#include "HumanA.hpp"

HumanA::HumanA( std::string	name, Weapon & w) : name(name), w(&w) {};

HumanA::~HumanA() {};

void	HumanA::setWeapon( Weapon & w ) { this->w = &w; };

void	HumanA::attack( void )
{
	std::cout << this->name << " attacks with his " << this->w->getType() << std::endl; 
}
