#pragma once
#include <iostream>

class ClapTrap
{
private:
	std::string m_name;
	unsigned int m_hitPoints;
	unsigned int m_energyPoints;
	unsigned int m_damage;

public:
	explicit ClapTrap( std::string name );
	~ClapTrap();
	ClapTrap( const ClapTrap & other );
	ClapTrap & operator=( const ClapTrap &other );
	void attack( const std::string& target );
	void takeDamage( unsigned int amount );
	void beRepaired( unsigned int amount );
};

