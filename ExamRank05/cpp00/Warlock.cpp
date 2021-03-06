#include "Warlock.hpp"

Warlock::Warlock( std::string name, std::string title) : name(name), title(title)
{
	std::cout << this->getName() << ": This looks like another boring day.\n";
}

Warlock::~Warlock()
{
	std::cout << this->getName() << ": My job here is done!\n";
}

void Warlock::introduce() const
{
	std::cout << this->getName() << ": I am " << this->getName() << ", " << this->getTitle() << "!\n";
}


