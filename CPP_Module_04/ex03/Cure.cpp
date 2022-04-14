#include "Cure.hpp"

Cure::Cure(/* args */)
{
}

Cure::Cure( const Cure & other)
{

}

Cure& Cure::operator=( const Cure & other)
{
    
}

Cure::~Cure()
{
}

void Ice::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}

AMateria* AMateria::clone() const
{
    return new Cure();
}
