#include "Dog.hpp"

Dog::Dog( void ) : Animal()
{
    this->type = "Dog";
    this->brain = new Brain();
    std::cout << "Animal with type " << this->type <<" created\n";
}

Dog::~Dog()
{
    delete this->brain;
    std::cout << "Animal with type " << this->type <<" destroyed\n";
}

void Dog::makeSound() const
{
    std::cout << "WOF-WOF\n";
}

Dog::Dog(const Dog & other)
{
    this->type = other.type;
    this->brain = new Brain(*other.brain);
}

Dog & Dog::operator=(const Dog & other)
{
    if (this == &other)
        return (*this);
    this->type = other.type;
    if (this->brain)
        delete this->brain;
    this->brain = new Brain(*other.brain);
    return (*this);
}

void Dog::setIdea(const std::string& str) const
{
	this->brain->setIdea(str);
}

void Dog::showIdeas() const
{
    this->brain->showIdeas();
}