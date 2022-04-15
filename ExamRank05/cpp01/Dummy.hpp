#include "ATarget.hpp"

class Dummy : public ATarget
{
public:
	Dummy(/* args */);
	~Dummy();
	ATarget *Dummy::clone() const;
};
