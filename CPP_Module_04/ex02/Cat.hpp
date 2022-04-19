#pragma once
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
private:
    Brain *brain;
public:
    Cat( void );
    virtual ~Cat();
    virtual void makeSound() const;
    Cat & operator=(const Cat & other);
    Cat(const Cat & other);
    virtual Brain* getBrain() const;
    // virtual void setIdea(const std::string& str) const;
    // virtual void showIdeas() const;
};