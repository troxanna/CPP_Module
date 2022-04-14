#pragma once
#include "Animal.hpp"

class Dog : public Animal
{
public:
    Dog( void );
    virtual ~Dog();
    virtual void makeSound() const;
    Dog & operator=(const Dog & other);
    Dog(const Dog & other);
};
