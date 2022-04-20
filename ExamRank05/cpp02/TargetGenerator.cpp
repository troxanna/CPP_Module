#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator( void ) 
{
	//std::cout << this->getName() << "This looks like another boring day.\n";
}

TargetGenerator::~TargetGenerator()
{
	//std::cout << this->getName() << "My job here is done!\n";
	std::vector<ATarget*>::iterator ite = this->targets.end();
	for (std::vector<ATarget*>::iterator it = this->targets.begin(); it != ite; it++)
		delete (*it);
	this->targets.clear();
}

void	TargetGenerator::learnTargetType(ATarget *ptr)
{
	if (!ptr)
		return ;
	std::vector<ATarget*>::iterator ite = this->targets.end();
	for (std::vector<ATarget*>::iterator it = this->targets.begin(); it != ite; ++it)
		if ((*it)->getType() == ptr->getType())
			return ;
		this->targets.push_back(ptr->clone());
}

void	TargetGenerator::forgetTargetType(std::string const & targetType)
{
	std::vector<ATarget*>::iterator ite = this->targets.end();
	for (std::vector<ATarget*>::iterator it = this->targets.begin(); it != ite; it++)
		if ((*it)->getType() == targetType)
		{
			delete *it;
			it = this->targets.erase(it);
			return ;
		}
}
ATarget* TargetGenerator::createTarget(std::string const & targetType)
{
	std::vector<ATarget*>::iterator ite = this->targets.end();
	for (std::vector<ATarget*>::iterator it = this->targets.begin(); it != ite; it++)
		if ((*it)->getType() == targetType)
			return (*it);
	return (nullptr);
}