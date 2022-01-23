#pragma once

#include <iostream>
#include <string>

class Zombie
{
private:
	std::string name;
public:
	Zombie() : name(std::string ()) {};
	Zombie(std::string name) : name(name) {}; 
	~Zombie();
	void	announce();
	void	set_name(std::string name);
};

Zombie* zombieHorde( int N, std::string name );