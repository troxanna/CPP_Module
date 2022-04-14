#include "Cat.hpp"

Cat::Cat( void ) : Animal()
{
    this->type = "Cat";
    std::cout << "Animal with type " << this->type <<" created\n";
}

Cat::~Cat()
{
    std::cout << "Animal with type " << this->type <<" destroyed\n";
}

void Cat::makeSound() const
{
    std::cout << "Meeeeeeeow\n";
}

Cat::Cat(const Cat & other) : Animal(other)
{
    std::cout << "Animal with type " << this->type <<" copy\n";
}

Cat & Cat::operator=(const Cat & other)
{
    this->type = other.type;
    return (*this);
}