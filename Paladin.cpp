#include "Paladin.h"

Paladin::Paladin(std::string name_, int hp_, int armor_, int attackDamage_ = 10) : 
Character(hp_, armor_, attackDamage_), 
name(name_)
{
}

const std::string& Paladin::getName()
{
    return name;
}

std::string& Paladin::getStats()
{
    Utility::getCharacterStats(this);
}