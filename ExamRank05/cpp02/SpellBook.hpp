#pragma once

# include <iostream>
# include <string>
# include <vector>
# include "ASpell.hpp"

class SpellBook
{
private:
	std::vector<ASpell*> spells;

	SpellBook( SpellBook const & other);
	SpellBook & operator=(SpellBook const & other);
public:
	SpellBook( void );
	~SpellBook();

	void	learnSpell(ASpell *ptr);
	void	forgetSpell(std::string const & spellName);
	ASpell* createSpell(std::string const & spellName);
	// void	setTitle(const std::string & title) {this->title = title;};
	// void introduce() const;

};
