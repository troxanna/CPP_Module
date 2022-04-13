#pragma once
#include "ASpell.hpp"
#include "Warlock.hpp"

class ASpell;

class ATarget
{
protected:
    std::string type;
public:
    ATarget( std::string type );
    virtual ~ATarget();
    const std::string & getType() const;
    ATarget& operator=( const ATarget & other );
    ATarget( const ATarget & other );
    virtual ATarget *clone() const = 0;
    void    getHitBySpell(const ASpell & obj) const;
};
