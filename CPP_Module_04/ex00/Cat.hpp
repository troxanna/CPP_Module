#pragma once
#include "Animal.hpp"

class Cat : public Animal
{
public:
    Cat( void );
    virtual ~Cat();
    virtual void makeSound() const;
    Cat & operator=(const Cat & other);
    Cat(const Cat & other);
};