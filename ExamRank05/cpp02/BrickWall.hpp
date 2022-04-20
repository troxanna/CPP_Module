#pragma once

#include "ATarget.hpp"

class BrickWall : public ATarget
{
public:
	BrickWall( void ) : ATarget( "Inconspicuous Red-brick Wall" ) {};
	virtual ~BrickWall() {};
	virtual ATarget *clone() const;
};
