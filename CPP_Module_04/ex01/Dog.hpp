#pragma once
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
private:
    Brain *brain;
public:
    Dog( void );
    virtual ~Dog();
    virtual void makeSound() const;
    Dog & operator=(const Dog & other);
    Dog(const Dog & other);
    virtual Brain* getBrain() const;
    // virtual void setIdea(const std::string& str) const;
    // virtual void showIdeas() const;
};
