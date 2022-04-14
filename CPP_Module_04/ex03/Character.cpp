#include "Character.hpp"

Character::Character( void ) {};

Character::Character( const std::string& name ) : name(name)
{}

Character::Character( const Character & other )
{

}

Character & Character::operator=( const Character & other )
{
    
}

Character::~Character()
{
}

const std::string& Character::getName() const
{
    return (this->name);
}
