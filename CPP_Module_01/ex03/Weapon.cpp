#include "Weapon.hpp"

Weapon::Weapon( void ) : type(std::string()) {};

Weapon::Weapon( std::string name ) : type(name) {};

Weapon::~Weapon() {};

const std::string & Weapon::getType( void ) const { return (this->type); };

void	Weapon::setType( std::string type ) { this->type = type; };