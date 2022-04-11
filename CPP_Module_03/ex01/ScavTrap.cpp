#include "ScavTrap.hpp"

ScavTrap::ScavTrap( std::string name ) : ClapTrap(name)
{
	std::cout << "Scav Trap " << get_name() << " created\n";
	set_hitPoints(100);
	set_energyPoints(50);
	set_damage(20);
};

ScavTrap::ScavTrap( const ScavTrap & other )
{

}

ScavTrap & ScavTrap::operator=( const ScavTrap &other )
{
	this->m_name = other.m_name;
	this->m_hitPoints = other.m_hitPoints;
	this->m_energyPoints = other.m_energyPoints;
	this->m_damage = other.m_damage;
	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout << "Scav Trap " << get_name() << " dead\n";
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap is now in Gate keeper mode\n";
}