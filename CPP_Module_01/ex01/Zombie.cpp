#include "Zombie.hpp"

Zombie::~Zombie()
{
	std::cout << "Zombi " << this->name << " died..." << std::endl;
}

void	Zombie::announce()
{
	std::cout << this->name << " BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::set_name(std::string name)
{
	this->name = name;
}
