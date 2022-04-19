#pragma once
#include "ICharacter.hpp"
#include "MateriaSource.hpp"

class Character : public ICharacter
{
private:
    AMateria* materials[4];
	std::string	name;
    size_t currentSize;
    Character( void );
public:
    explicit Character( const std::string& name );
    Character( const Character & other );
    Character & operator=( const Character & other );
    //const std::string& getName() const;
    virtual ~Character();
    virtual std::string const & getName() const;
    virtual void equip(AMateria* m);
    virtual void unequip(int idx);
    virtual void use(int idx, ICharacter& target);
};
