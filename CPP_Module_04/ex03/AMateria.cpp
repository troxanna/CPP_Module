#include "AMateria.hpp"

AMateria::AMateria(std::string const & type) : type(type) {};

std::string const & AMateria::getType() const
{
    return (this->type);
}

void use(ICharacter& target)
{
    //Что туточки?
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
