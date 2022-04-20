#ifndef ASPELL_HPP
# define ASPELL_HPP

# include <iostream>
# include <string>

class ATarget;

class ASpell
{
private:
	std::string name;
	std::string effects;

	ASpell( void );
public:
	ASpell( std::string name, std::string effects);
	ASpell( ASpell const & other);
	ASpell & operator=(ASpell const & other);
	virtual ~ASpell();

	const std::string & getName() const {return (this->name);};
	const std::string & getEffects() const {return (this->effects);};

	virtual ASpell *clone() const = 0;

	void	launch(ATarget const & ptr);

	// void	setTitle(const std::string & title) {this->title = title;};
	// void introduce() const;

};

# include "ATarget.hpp"

#endif