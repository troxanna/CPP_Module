#include "Character.hpp"

// Character::Character( void ) 
// {};

Character::Character( const std::string& name ) : name(name)
{
    for (size_t i = 0; i < 4; i++)
		this->materials[i] = nullptr;
	this->currentSize = 0;
}

Character::Character( const Character & other )
{
    *this = other;
}

Character & Character::operator=( const Character & other )
{
    AMateria *ptr;
	if (&other == this)
		return (*this);
	for (size_t i = 0; i < other.currentSize; i++)
	{
		ptr = this->materials[i];
		this->materials[i] = other.materials[i]->clone();
		if (ptr && this->materials[i])
			delete ptr;
		ptr = nullptr;
	}
	this->currentSize = other.currentSize;
	return (*this);
}

Character::~Character()
{
    // for (size_t i = 0; i < this->currentSize; i++)
    //     delete this->materials[i];
}

void Character::use(int idx, ICharacter& target)
{
    ICharacter *ptr = nullptr;
    if (ptr == &target)
        return ;
    if (idx < (int)this->currentSize && this->materials[idx])
        this->materials[idx]->use(target);
}

std::string const & Character::getName() const
{
    return (this->name);
}

void Character::equip(AMateria* m)
{
    if (this->currentSize < 4)
    {   
        this->materials[this->currentSize] = m;
        this->currentSize++;
    }
}

void Character::unequip(int idx)
{
    if (idx >= (int)this->currentSize)
        return ;
    for (size_t i = idx; i < this->currentSize && this->materials[i + 1]; i++)
        this->materials[i] = this->materials[i + 1];
     this->currentSize--;
     this->materials[currentSize] = NULL;
}
