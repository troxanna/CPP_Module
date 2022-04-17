#pragma once
#include <iostream>
#include "ASpell.hpp"
#include "ATarget.hpp"
#include <vector>

class ASpell;
class ATarget;

class Warlock
{
private:
    std::string name;
    std::string title;
    Warlock( const Warlock & other );
    Warlock& operator=( const Warlock & other );
    Warlock( void );
    std::vector<ASpell*> spells;
public:
    Warlock( std::string name, std::string title );
    ~Warlock();
    const std::string & getName() const;
    const std::string & getTitle() const;
    void setTitle(const std::string & other);
    void introduce() const;

    void    learnSpell(ASpell *obj);
    void    forgetSpell(std::string const &spellName);
    void    launchSpell(std::string const &spellName, ATarget const &target);
};

