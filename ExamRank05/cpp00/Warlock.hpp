#ifndef WARLOCK_HPP
# define WARLOCK_HPP

#include <iostream>

class Warlock
{
private:
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

};

#endif