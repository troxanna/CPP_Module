#include "ATarget.hpp"

ATarget::ATarget( std::string type ) : type(type) {};

ATarget::~ATarget() {}

ATarget::ATarget( const ATarget & other )
{
    this->type = other.type;
}

ATarget& ATarget::operator=( const ATarget & other )
{
    this->type = other.type;
    return (*this);
}

const std::string & ATarget::getType() const
{
    return (this->type);
}

void    ATarget::getHitBySpell(const ASpell & obj) const
{
    std::cout << this->type << " has been " << obj.getEffects() << "!";
}