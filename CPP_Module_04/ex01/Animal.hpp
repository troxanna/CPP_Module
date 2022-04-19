#pragma once
#include <iostream>
#include "Brain.hpp"

class Brain;

class Animal
{
protected:
    std::string type;

public:
    Animal( void );
    virtual ~Animal();
    virtual void makeSound() const;
    const std::string & getType() const;
    Animal & operator=(const Animal & other);
    Animal(const Animal & other);
    virtual Brain* getBrain() const = 0;
    //virtual void setIdea(const std::string& str) const = 0;
    //virtual void showIdeas() const = 0;
};
