#include "Weapon.hpp"

class HumanB
{
private:
	std::string	name;
	Weapon	*w;

public:
	HumanB( std::string	name ) : name(name), w(nullptr) {};
	~HumanB() {  };
	void	attack( void );
	void	setWeapon( Weapon & w ) { this->w = &w; };
};