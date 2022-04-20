#ifndef FWOOSH_HPP
# define FWOOSH_HPP

#include "ASpell.hpp"

class Fwoosh : public ASpell
{
public:
	Fwoosh( void ) : ASpell( "Fwoosh", "fwooshed" ) {};
	virtual ~Fwoosh() {};
	virtual ASpell *clone() const;
};

#endif