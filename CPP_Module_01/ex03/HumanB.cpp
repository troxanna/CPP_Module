#include "HumanB.hpp"

void	HumanB::attack( void )
{
	if (this->w != nullptr)
		std::cout << this->name << " attacks with his " << this->w->getType() << std::endl; 
	else
		std::cout << this->name << " unarmed." << std::endl;
}