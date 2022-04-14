#pragma once
#include "AMateria.hpp"

class Cure : public AMateria
{
private:
    /* data */
public:
    Cure(/* args */);
    Cure( const Cure & other);
    Cure& operator=( const Cure & other);
    ~Cure();
    virtual void use(ICharacter& target);
	virtual Cure* clone() const;
};

