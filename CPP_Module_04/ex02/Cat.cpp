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
    *this = other;
}

Cat & Cat::operator=(const Cat & other)
{
    Brain *ptr;
    if (this == &other)
        return (*this);
    this->type = other.type;
    ptr = this->brain;
    this->brain = new Brain(*other.brain);
    if (ptr && this->brain)
        delete ptr;
    return (*this);
}

// void Cat::setIdea(const std::string& str) const
// {
// 	this->brain->setIdea(str);
// }

// void Cat::showIdeas() const
// {
//     this->brain->showIdeas();
// }

Brain* Cat::getBrain() const
{
    return (this->brain);
}