#ifndef WARLOCK_HPP
# define WARLOCK_HPP

# include <iostream>
# include "ASpell.hpp"
# include "ATarget.hpp"
# include "SpellBook.hpp"

class Warlock
{
private:
	SpellBook book;
	std::string name;
	std::string title;

	Warlock( void );
	Warlock( const Warlock & other);
	Warlock & operator=( const Warlock & other);
public:
	Warlock( std::string name, std::string title);
	~Warlock();

	const std::string & getName() const {return (this->name);};
	const std::string & getTitle() const {return (this->title);};

	void	setTitle(const std::string & title) {this->title = title;};
	void introduce() const;

	void	learnSpell(ASpell *ptr);
	void	forgetSpell(std::string const & spellName);
	void	launchSpell(std::string const & spellName, ATarget const & ref);

};

#endif