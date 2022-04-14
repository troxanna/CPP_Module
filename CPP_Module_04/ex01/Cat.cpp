#include "Cat.hpp"

Cat::Cat( void ) : Animal()
{
    this->type = "Cat";
    this->brain = new Brain();
    std::cout << "Animal with type " << this->type <<" created\n";
}

Cat::~Cat()
{
    delete this->brain;
    std::cout << "Animal with type " << this->type <<" destroyed\n";
}

void Cat::makeSound() const
{
    std::cout << "Meeeeeeeow\n";
}

Cat::Cat(const Cat & other)
{
    this->type = other.type;
    this->brain = new Brain(*other.brain);
}

Cat & Cat::operator=(const Cat & other)
{
    if (this == &other)
        return (*this);
    this->type = other.type;
    if (this->brain)
        delete this->brain;
    this->brain = new Brain(*other.brain);
    return (*this);
}

void Cat::setIdea(const std::string& str) const
{
	this->brain->setIdea(str);
}

void Cat::showIdeas() const
{
    this->brain->showIdeas();
}
