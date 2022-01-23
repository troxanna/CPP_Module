#include "HumanA.hpp"

void	HumanA::attack( void )
{
	std::cout << this->name << " attacks with his " << this->w->getType() << std::endl; 
}
