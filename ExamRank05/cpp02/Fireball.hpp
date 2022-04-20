#pragma once
#include "ASpell.hpp"

class Fireball : public ASpell
{
public:
	Fireball( void ) : ASpell( "Fireball", "burnt to a crisp" ) {};
	virtual ~Fireball() {};
	virtual ASpell *clone() const;
};
