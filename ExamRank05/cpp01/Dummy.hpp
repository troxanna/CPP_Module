#pragma once
#include "ATarget.hpp"

class Dummy : public ATarget
{
public:
	Dummy(/* args */);
	virtual ~Dummy();
	virtual ATarget *clone() const;
};
