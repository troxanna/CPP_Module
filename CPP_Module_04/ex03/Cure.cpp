#include "Cure.hpp"

Cure::Cure( void ) : AMateria("cure")
{}

Cure::Cure( const Cure & other) : AMateria(other)
{}

Cure& Cure::operator=( const Cure & other)
{
    this->type = other.type;
	return (*this);
}

Cure::~Cure()
{
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}

AMateria* Cure::clone() const
{
    return new Cure();
}
