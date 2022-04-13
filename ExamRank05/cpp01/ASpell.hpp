#pragma once
#include "Warlock.hpp"
#include "ATarget.hpp"

class ATarget;

class ASpell
{
protected:
    std::string name;
    std::string effects;
public:
    ASpell( std::string name, std::string effects );
    virtual ~ASpell();
    const std::string & getName() const;
    const std::string & getEffects() const;
    ASpell& operator=( const ASpell & other );
    ASpell( const ASpell & other );
    virtual ASpell *clone() const = 0;
    void launch(ATarget const &target_ref) const;
};