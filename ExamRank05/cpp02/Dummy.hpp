#ifndef DUMMY_HPP
# define DUMMY_HPP

#include "ATarget.hpp"

class Dummy : public ATarget
{
public:
	Dummy( void ) : ATarget( "Target Practice Dummy" ) {};
	virtual ~Dummy() {};
	virtual ATarget *clone() const;
};

#endif