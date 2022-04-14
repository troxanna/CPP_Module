#include "Ice.hpp"

Ice::Ice( void ) : AMateria("ice")
{}

Ice::Ice( const Ice & other) : AMateria(other)
{}

Ice& Ice::operator=( const Ice & other)
{
    this->type = other.type;
}

Ice::~Ice()
{}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

AMateria* AMateria::clone() const
{
    return new Ice();
}

