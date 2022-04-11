#include <iostream>

class ClapTrap
{
private:
	ClapTrap( void ) {};
	unsigned int m_hitPoints;
	unsigned int m_energyPoints;
	unsigned int m_damage;
	std::string m_name;

public:
	ClapTrap( std::string name );
	~ClapTrap();
	ClapTrap( const ClapTrap & other );
	ClapTrap & operator=( const ClapTrap &other );
	void attack( const std::string& target );
	void takeDamage( unsigned int amount );
	void beRepaired( unsigned int amount );
};

