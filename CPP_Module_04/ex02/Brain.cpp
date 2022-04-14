#include "Brain.hpp"

Brain::Brain( void )
{
    std::cout << "Brain created\n";
}

Brain::~Brain()
{
    std::cout << "Brain destroyed\n";
}

Brain::Brain( const Brain & other )
{
    std::cout << "Copy constructor Brain called\n";
    for (size_t i  = 0; i < 100; ++i)
			this->ideas[i] = other.ideas[i];
}

Brain& Brain::operator=(const Brain& other) 
{
	for (size_t i  = 0; i < 100; ++i)
		this->ideas[i] = other.ideas[i];
	return *this;
}

 void    Brain::setIdea(const std::string & str)
 {
    for (size_t i = 0; i < 100; i++)
        if (!this->ideas[i].length())
        {
            ideas[i] = str;
            break ;
        }
 }

 void Brain::showIdeas()
 {
     for (size_t i = 0; i < 100; i++)
     {
        if (!this->ideas[i].length())
            break ;
        std::cout << "Idea " << i + 1 << ": " << this->ideas[i] << std::endl;
     }
 }