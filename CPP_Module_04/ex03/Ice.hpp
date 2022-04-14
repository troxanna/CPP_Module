#pragma once
#include "AMateria.hpp"

class Ice : public AMateria
{
private:
    /* data */
public:
    Ice(/* args */);
    Ice( const Ice & other);
    Ice& operator=( const Ice & other);
    ~Ice();
    virtual void use(ICharacter& target);
	virtual AMateria* clone() const;
};

