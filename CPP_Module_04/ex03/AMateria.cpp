#include "AMateria.hpp"

AMateria::AMateria(std::string const & type) : type(type) {};

std::string const & AMateria::getType() const
{
    return (this->type);
}

void AMateria::use(ICharacter& target)
{
    (void)target;
}

AMateria::AMateria(const AMateria & other)
{
    this->type = other.type;
}

AMateria& AMateria::operator=(const AMateria & other)
{
    this->type = other.type;
    return (*this);
}

AMateria::AMateria() {};

AMateria::~AMateria() {};
