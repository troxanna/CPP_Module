#include "Zombie.hpp"

Zombie::~Zombie()
{
	std::cout << "Zombi " << this->name << " died..." << std::endl;
}

void	Zombie::announce()
{
	std::cout << this->name << " BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie* newZombie( std::string name )
{
	Zombie	*p = new Zombie(name);
	return (p);
}

//не возвращаем указатель,значит на стеке
void randomChump( std::string name )
{
	Zombie	p = name;
	p.announce();
}