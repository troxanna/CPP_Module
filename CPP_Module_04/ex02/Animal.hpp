#pragma once
#include <iostream>

class Animal
{
protected:
    std::string type;
public:
    Animal( void );
    virtual ~Animal();
    virtual void makeSound() const = 0;
    const std::string & getType() const;
    Animal & operator=(const Animal & other);
    Animal(const Animal & other);
    virtual void setIdea(const std::string& str) const = 0;
    virtual void showIdeas() const = 0;
};
