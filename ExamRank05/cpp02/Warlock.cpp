#include "Warlock.hpp"

Warlock::Warlock( std::string name, std::string title) : name(name), title(title)
{
	std::cout << this->getName() << ": This looks like another boring day.\n";
}

Warlock::~Warlock()
{
	std::cout << this->getName() << ": My job here is done!\n";
}

void Warlock::introduce() const
{
	std::cout << this->getName() << ": I am " << this->getName() << ", " << this->getTitle() << "!\n";
}

void	Warlock::learnSpell(ASpell *ptr)
{
	if (ptr)
		book.learnSpell(ptr);
}

void	Warlock::forgetSpell(std::string const  & spellName)
{
	book.forgetSpell(spellName);
}
void	Warlock::launchSpell(std::string const & spellName, ATarget const & ref)
{
	ATarget const *tTmp = 0;
	if (tTmp == &ref)
		return ;
	ASpell *aTmp = this->book.createSpell(spellName);
	if (aTmp)
		aTmp->launch(ref);
}
