#include <iostream>

#include "Dwarf.h"

Dwarf::Dwarf(std::string name_, int hp_, int armor_, int attackDamage_) : 
Character(hp_, armor_, attackDamage_), 
name(name_)
{
    helpfulItems = makeHelpfulItems(randSmall());
    defensiveItems = makeDefensiveItems(randSmall());
}

const std::string& Dwarf::getName()
{
    return name;
}

std::string Dwarf::getStats()
{
    return Utility::getCharacterStats(this);
}
