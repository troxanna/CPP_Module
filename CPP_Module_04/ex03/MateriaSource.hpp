#pragma once
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
private:
    AMateria *inventory[4];
    size_t size;
public:
    MateriaSource( void );
    virtual ~MateriaSource();
    virtual void learnMateria(AMateria* materia);
    virtual AMateria* createMateria(std::string const & type);
    MateriaSource(const MateriaSource &other);
	MateriaSource &operator=(MateriaSource const &other);
    AMateria * getMateria( int index ) const;
};

