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
	void set_name( std::string name );
	void set_hitPoints( unsigned int hitPoints );
	void set_energyPoints( unsigned int energyPoints );
	void set_damage( unsigned int damage );
	unsigned int & get_hitPoints( void );
	unsigned int & get_energyPoints( void );
	unsigned int & get_damage( void );
	std::string & get_name( void );
	virtual ~ClapTrap();
	void attack( const std::string& target );
	void takeDamage( unsigned int amount );
	void beRepaired( unsigned int amount );
};

