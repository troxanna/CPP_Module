#include "ScavTrap.hpp"

//конструктор копирования и перегруженный оператор присваивания наследуем от ClapTrap

ScavTrap::ScavTrap( std::string name ) : ClapTrap(name)
{
	std::cout << "Scav Trap " << getName() << " created\n";
	setHitPoints(100);
	setEnergyPoints(50);
	setDamage(20);
};

ScavTrap::~ScavTrap()
{
	std::cout << "Scav Trap " << getName() << " dead\n";
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap is now in Gate keeper mode\n";
}