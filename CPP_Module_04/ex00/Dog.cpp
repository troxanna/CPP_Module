#include "Dog.hpp"

Dog::Dog( void ) : Animal()
{
    this->type = "Dog";
    std::cout << "Animal with type " << this->type <<" created\n";
}

Dog::~Dog()
{
    std::cout << "Animal with type " << this->type <<" destroyed\n";
}

void Dog::makeSound() const
{
    std::cout << "WOF-WOF\n";
}

Dog::Dog(const Dog & other) : Animal(other)
{
    std::cout << "Animal with type " << this->type <<" copy\n";
}

Dog & Dog::operator=(const Dog & other)
{
    this->type = other.type;
    return (*this);
}