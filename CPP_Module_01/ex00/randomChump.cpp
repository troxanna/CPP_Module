#include "Zombie.hpp"

//не возвращаем указатель,значит на стеке
void randomChump( std::string name )
{
	Zombie	p = name;
	p.announce();
}