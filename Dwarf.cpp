#include <iostream>

#include "Dwarf.h"

Dwarf::Dwarf(std::string name_, int hp_ int armor_, int attackDamage_ = 4) : 
Character(hp_, armor_, attackDamage_), 
name(name_)
{
}

const std::string& Dwarf::getName()
{
    return name;
}

std::string Dwarf::getStats()
{
    return Utility::getCharacterStats(this);
}
