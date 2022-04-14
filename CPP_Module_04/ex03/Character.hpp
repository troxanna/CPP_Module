#include "ICharacter.hpp"

class Character : public ICharacter
{
private:
    AMateria	*inventory[4];
	std::string	name;
public:
    Character( void );
    Character( const std::string& name );
    const std::string& getName() const;
    ~Character();
};
