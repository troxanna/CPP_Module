#pragma once
#include <iostream>

class ICharacter;

class AMateria
{
private:
    AMateria();
protected:
    std::string type;
public:
    AMateria(std::string const & type);
    AMateria(const AMateria & type);
    AMateria& operator=(const AMateria & other);
    std::string const & getType() const; //Returns the materia type
    virtual AMateria* clone() const = 0;
    virtual void use(ICharacter& target);
    virtual ~AMateria();
};

#include "ICharacter.hpp"
