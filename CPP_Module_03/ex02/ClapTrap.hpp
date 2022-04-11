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
	void ClapTrap::set_name( std::string name );
	void ClapTrap::set_hitPoints( unsigned int hitPoints );
	void ClapTrap::set_energyPoints( unsigned int energyPoints );
	void ClapTrap::set_damage( unsigned int damage );
	std::string & ClapTrap::get_name( void );
	virtual ~ClapTrap();
	void attack( const std::string& target );
	void takeDamage( unsigned int amount );
	void beRepaired( unsigned int amount );
};

