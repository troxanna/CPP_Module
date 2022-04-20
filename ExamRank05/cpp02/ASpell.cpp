#include "ASpell.hpp"

ASpell::ASpell( std::string name, std::string effects) : name(name), effects(effects)
{
	//std::cout << this->getName() << "This looks like another boring day.\n";
}

ASpell::~ASpell()
{
	//std::cout << this->getName() << "My job here is done!\n";
}

ASpell::ASpell(ASpell const & other)
{
	*this = other;
}
ASpell & ASpell::operator=(ASpell const & other)
{
	if (this == &other)
		return (*this);
	this->name = other.name;
	this->effects = other.effects;
	return (*this);
}

void	ASpell::launch(ATarget const & ptr)
{
	ptr.getHitBySpell(*this);
}
