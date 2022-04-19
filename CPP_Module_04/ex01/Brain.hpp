#pragma once
#include <iostream>
#include "Animal.hpp"

class Brain
{
private:
    std::string ideas[100];
public:
    Brain(/* args */);
    ~Brain();
    Brain& operator=(const Brain& other);
    Brain( const Brain & other );
    void    setIdea(const std::string & str);
    void    showIdeas();
};
