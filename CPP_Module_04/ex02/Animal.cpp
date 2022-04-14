#include "Animal.hpp"

Animal::Animal( ) : type(std::string())
{
    std::cout << "Animal created\n";
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

Animal::~Animal()
{
    std::cout << "Animal destroyed\n";
}

const std::string & Animal::getType() const
{
    return (this->type);
}
