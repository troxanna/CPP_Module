#pragma once
#include "AMateria.hpp"

class Ice : public AMateria
{
private:
    /* data */
public:
    Ice( void );
    Ice( const Ice & other);
    Ice& operator=( const Ice & other);
    virtual ~Ice();
    virtual void use(ICharacter& target);
	virtual AMateria* clone() const;
};

