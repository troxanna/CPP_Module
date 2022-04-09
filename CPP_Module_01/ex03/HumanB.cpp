#include "HumanB.hpp"

HumanB::HumanB( std::string	name ) : name(name), w(nullptr) {};

HumanB::~HumanB() {  };

void	HumanB::setWeapon( Weapon & w ) { this->w = &w; };

void	HumanB::attack( void )
{
	if (this->w != nullptr)
		std::cout << this->name << " attacks with his " << this->w->getType() << std::endl; 
	else
		std::cout << this->name << " unarmed." << std::endl;
}