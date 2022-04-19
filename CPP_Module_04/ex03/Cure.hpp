#pragma once
#include "AMateria.hpp"

class Cure : public AMateria
{
private:
    /* data */
public:
    Cure( void );
    Cure( const Cure & other);
    Cure& operator=( const Cure & other);
    virtual ~Cure();
    virtual void use(ICharacter& target);
	virtual AMateria* clone() const;
};

