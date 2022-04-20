#include "MateriaSource.hpp"

MateriaSource::MateriaSource( void )
{
	for (size_t i = 0; i < 4; i++)
		this->inventory[i] = nullptr;
	size = 0;
}

MateriaSource::MateriaSource(const MateriaSource &other)
{
	*this = other;
}
MateriaSource& MateriaSource::operator=(MateriaSource const &other)
{
	AMateria *ptr;
	if (&other == this)
		return (*this);
	for (size_t i = 0; i < other.size; i++)
	{
		ptr = this->inventory[i];
		this->inventory[i] = other.inventory[i]->clone();
		if (ptr && this->inventory[i])
			delete ptr;
		ptr = nullptr;
	}
	this->size = other.size;
	return (*this);
}

MateriaSource::~MateriaSource()
{
	for (size_t i = 0; i < this->size && this->inventory[i]; i++)
		delete this->inventory[i];
}

void MateriaSource::learnMateria(AMateria* materia)
{
	if (materia && this->size < 4)
	{
		this->inventory[size] = materia;
		this->size++;
	}
	else
		return ;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for (size_t i = 0; i < this->size; i++)
	{
		if (inventory[i]->getType() == type)
			return (this->inventory[i]);
	}
	return (nullptr);
}

AMateria * MateriaSource::getMateria( int index ) const
{
	if (index > (int)this->size || index < 0)
		return nullptr;
	return (this->inventory[index]);
}