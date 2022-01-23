#include "Weapon.hpp"

class HumanA
{
private:
	std::string	name;
	Weapon	*w;

public:
	HumanA( std::string	name, Weapon & w) : name(name), w(&w) {};
	~HumanA() { };
	void	attack( void );
	void	setWeapon( Weapon & w ) { this->w = &w; };
};

