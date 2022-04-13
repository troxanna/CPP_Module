#include "ASpell.hpp"

ASpell::ASpell( std::string name, std::string effects ) : name(name), effects(effects) {};

ASpell::~ASpell() {}

ASpell::ASpell( const ASpell & other )
{
    this->name = other.name;
    this->effects = other.effects;
}

ASpell& ASpell::operator=( const ASpell & other )
{
    this->name = other.name;
    this->effects = other.effects;
    return (*this);
}

const std::string & ASpell::getName() const
{
    return (this->name);
}
const std::string & ASpell::getEffects() const
{
    return (this->effects);
}

void ASpell::launch(ATarget const &target_ref) const
{
    target_ref.getHitBySpell((*this));
}