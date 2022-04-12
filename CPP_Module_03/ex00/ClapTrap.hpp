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
	virtual ~ClapTrap();
	ClapTrap( const ClapTrap & other );
	ClapTrap & operator=( const ClapTrap &other );
	void attack( const std::string& target );
	void takeDamage( unsigned int amount );
	void beRepaired( unsigned int amount );
	void setName( std::string name );
	void setHitPoints( unsigned int hitPoints );
	void setEnergyPoints( unsigned int energyPoints );
	void setDamage( unsigned int damage );
	unsigned int getHitPoints( void ) const;
	unsigned int getEnergyPoints( void ) const;
	unsigned int getDamage( void ) const;
	std::string getName( void ) const;
	void	getInfo();
};

