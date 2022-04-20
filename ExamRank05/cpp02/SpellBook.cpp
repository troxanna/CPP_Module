#include "SpellBook.hpp"

SpellBook::SpellBook( void ) 
{
	//std::cout << this->getName() << "This looks like another boring day.\n";
}

SpellBook::~SpellBook()
{
	//std::cout << this->getName() << "My job here is done!\n";
	std::vector<ASpell*>::iterator ite = this->spells.end();
	for (std::vector<ASpell*>::iterator it = this->spells.begin(); it != ite; it++)
		delete (*it);
	this->spells.clear();
}

void	SpellBook::learnSpell(ASpell *ptr)
{
	if (!ptr)
		return ;
	std::vector<ASpell*>::iterator ite = this->spells.end();
	for (std::vector<ASpell*>::iterator it = this->spells.begin(); it != ite; ++it)
		if ((*it)->getName() == ptr->getName())
			return ;
		this->spells.push_back(ptr->clone());
}

void	SpellBook::forgetSpell(std::string const & spellName)
{
	std::vector<ASpell*>::iterator ite = this->spells.end();
	for (std::vector<ASpell*>::iterator it = this->spells.begin(); it != ite; it++)
		if ((*it)->getName() == spellName)
		{
			delete *it;
			it = this->spells.erase(it);
			return ;
		}
}
ASpell* SpellBook::createSpell(std::string const & spellName)
{
	std::vector<ASpell*>::iterator ite = this->spells.end();
	for (std::vector<ASpell*>::iterator it = this->spells.begin(); it != ite; it++)
		if ((*it)->getName() == spellName)
			return (*it);
	return (nullptr);
}