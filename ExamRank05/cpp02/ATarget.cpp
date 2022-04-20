#include "ATarget.hpp"

ATarget::ATarget( std::string type) : type(type)
{
	//std::cout << this->getName() << "This looks like another boring day.\n";
}

ATarget::~ATarget()
{
	//std::cout << this->getName() << "My job here is done!\n";
}

ATarget::ATarget(ATarget const & other)
{
	*this = other;
}
ATarget & ATarget::operator=(ATarget const & other)
{
	if (this == &other)
		return (*this);
	this->type = other.type;
	return (*this);
}

void	ATarget::getHitBySpell(ASpell const & ptr) const
{
	std::cout << this->getType() << " has been " << ptr.getEffects() << std::endl;
}
