#ifndef ATARGET_HPP
# define ATARGET_HPP

# include <iostream>
# include <string>

class ASpell;

class ATarget
{
private:
	std::string type;

	ATarget( void );
public:
	ATarget( std::string type);
	ATarget( ATarget const & other);
	ATarget & operator=( ATarget const & other);
	virtual ~ATarget();

	const std::string & getType() const {return (this->type);};

	virtual ATarget *clone() const = 0;

	void	getHitBySpell(ASpell const &ptr) const;
	// void	setTitle(const std::string & title) {this->title = title;};
	// void introduce() const;

};

# include "ASpell.hpp"

#endif