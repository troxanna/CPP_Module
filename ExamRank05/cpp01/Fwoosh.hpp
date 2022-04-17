#pragma once
#include "ASpell.hpp"

class Fwoosh : public ASpell
{

public:
	Fwoosh(/* args */);
	virtual ~Fwoosh();

	virtual ASpell *clone() const;
};
