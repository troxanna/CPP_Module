#include "ASpell.hpp"

class Fwoosh : public ASpell
{

public:
	Fwoosh(/* args */);
	~Fwoosh();

	ASpell *Fwoosh::clone() const;
};
