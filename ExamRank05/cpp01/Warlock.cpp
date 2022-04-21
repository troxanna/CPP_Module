#include "Warlock.hpp"

Warlock::Warlock( std::string name, std::string title) : name(name), title(title)
{
	std::cout << this->getName() << ": This looks like another boring day.\n";
}

Warlock::~Warlock()
{
	std::cout << this->getName() << ": My job here is done!\n";
	std::vector<ASpell*>::iterator ite = this->spells.end();
	for (std::vector<ASpell*>::iterator it = this->spells.begin(); it != ite; it++)
		delete (*it);
	this->spells.clear();

}

void Warlock::introduce() const
{
	std::cout << this->getName() << ": I am " << this->getName() << ", " << this->getTitle() << "!\n";
}

void	Warlock::learnSpell(ASpell *ptr)
{
	if (!ptr)
		return ;
	std::vector<ASpell*>::iterator ite = this->spells.end();
	for (std::vector<ASpell*>::iterator it = this->spells.begin(); it != ite; ++it)
		if ((*it)->getName() == ptr->getName())
			return ;
		this->spells.push_back(ptr->clone());
}

void	Warlock::forgetSpell(const std::string & spellName)
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
void	Warlock::launchSpell(const std::string & spellName, const ATarget & ref)
{
	ATarget const *tmp = 0;
	if (tmp == &ref)
		return ;
	std::vector<ASpell*>::iterator ite = this->spells.end();
	for (std::vector<ASpell*>::iterator it = this->spells.begin(); it != ite; it++)
		if ((*it)->getName() == spellName)
		{
			(*it)->launch(ref);
			return ;
		}
}
