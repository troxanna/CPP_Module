#include "ClapTrap.hpp"

ClapTrap::ClapTrap( std::string name ) : m_name(name), m_hitPoints(10), m_energyPoints(10), m_damage(0)
{
	std::cout << "Clap Trap " << m_name << " created\n";
};

ClapTrap::~ClapTrap( void ) 
{
	std::cout << "Clap Trap " << m_name << " dead\n";
};

void ClapTrap::set_name( std::string name ) 
{
	m_name = name;
}

void ClapTrap::set_hitPoints( unsigned int hitPoints ) 
{
	m_hitPoints = hitPoints;
}

void ClapTrap::set_energyPoints( unsigned int energyPoints ) 
{
	m_energyPoints = energyPoints;
}

void ClapTrap::set_damage( unsigned int damage ) 
{
	m_damage = damage;
}

std::string & ClapTrap::get_name( void )
{
	return m_name;
}

void ClapTrap::attack(const std::string& target)
{
	if (m_energyPoints < 1)
		std::cout << m_name << " doesn't have enough energy \n";
	else
	{
		std::cout << "Clap Trap " << m_name << " attacks " << target <<", causing " << m_damage << " points of damage!\n";
		--m_energyPoints;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "Clap Trap " << m_name << " lost " << amount <<", hit points\n";
	(m_hitPoints - amount < 0) ? m_hitPoints = 0 : m_hitPoints -= amount;
}


void ClapTrap::beRepaired(unsigned int amount)
{
	if (m_energyPoints < 1)
		std::cout << m_name << " doesn't have enough energy \n";
	else
	{
		std::cout << "Clap Trap " << m_name << " restores " << amount <<", hit points\n";
		--m_energyPoints;
		m_hitPoints += amount;
	}
}
