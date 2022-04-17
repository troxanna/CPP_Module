#include "Fwoosh.hpp"

Fwoosh::Fwoosh( void ) : ASpell("Fwoosh", "fwooshed") {}

Fwoosh::~Fwoosh()
{
}

ASpell *Fwoosh::clone() const
{
	return (new Fwoosh(*this));
}
