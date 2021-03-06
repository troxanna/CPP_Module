#include "Animal.hpp"

Animal::Animal( void ) : type(std::string())
{
    std::cout << "Animal created\n";
}


Animal::~Animal()
{
    std::cout << "Animal destroyed\n";
}

Animal::Animal(const Animal & other)
{
    this->type = other.type;
}

Animal & Animal::operator=(const Animal & other)
{
    this->type = other.type;
    return (*this);
}

const std::string & Animal::getType() const
{
    return (this->type);
}

void Animal::makeSound() const
{
    std::cout << "Silence sounds\n";
}