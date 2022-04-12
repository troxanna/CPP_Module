#include "ClapTrap.hpp"

ClapTrap::ClapTrap( std::string name ) : m_name(name), m_hitPoints(10), m_energyPoints(10), m_damage(0)
{
	std::cout << "Clap Trap " << m_name << " created\n";
};

ClapTrap::~ClapTrap( void ) 
{
	std::cout << "Clap Trap " << m_name << " dead\n";
};

ClapTrap::ClapTrap( const ClapTrap & other )
{
	this->m_name = other.m_name;
	this->m_hitPoints = other.m_hitPoints;
	this->m_energyPoints = other.m_energyPoints;
	this->m_damage = other.m_damage;
}

ClapTrap & ClapTrap::operator=( const ClapTrap &other )
{
	this->m_name = other.m_name;
	this->m_hitPoints = other.m_hitPoints;
	this->m_energyPoints = other.m_energyPoints;
	this->m_damage = other.m_damage;
	return (*this);
}


void ClapTrap::setName( std::string name ) 
{
	m_name = name;
}

void ClapTrap::setHitPoints( unsigned int hitPoints ) 
{
	m_hitPoints = hitPoints;
}

void ClapTrap::setEnergyPoints( unsigned int energyPoints ) 
{
	m_energyPoints = energyPoints;
}

void ClapTrap::setDamage( unsigned int damage ) 
{
	m_damage = damage;
}

std::string ClapTrap::getName( void ) const
{
	return m_name;
}

unsigned int ClapTrap::getHitPoints( void ) const
{
	return m_hitPoints;
}

unsigned int ClapTrap::getEnergyPoints( void ) const
{
	return m_energyPoints;
}

unsigned int ClapTrap::getDamage( void ) const 
{
	return m_damage;
}

void ClapTrap::attack(const std::string& target)
{
	if (m_energyPoints < 1)
		std::cout << m_name << " doesn't have enough energy \n";
	else if (m_hitPoints < 1)
		std::cout << m_name << " has no hit points \n";
	else
	{
		std::cout << "Clap Trap " << m_name << " attacks " << target <<", causing " << m_damage << " points of damage!\n";
		--m_energyPoints;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (m_hitPoints < 1)
	{
		std::cout << "Clap Trap " << m_name << " is already dead\n";
		return ;
	}
	std::cout << "Clap Trap " << m_name << " lost " << amount <<", hit points\n";
	((static_cast<int>(m_hitPoints)) - static_cast<int>(amount) < 0) ? m_hitPoints = 0 : m_hitPoints -= amount;
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

void	ClapTrap::getInfo()
{
	std::cout << "Name: " << this->getName() << std::endl; 
	std::cout << "Hit points: " <<  this->getHitPoints() << std::endl; 
	std::cout << "Energy points: " <<  this->getEnergyPoints() << std::endl; 
	std::cout << "Damage: " <<  this->getDamage() << std::endl; 
	std::cout << std::endl;
}

