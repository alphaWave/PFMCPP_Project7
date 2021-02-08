#include <iostream>

#include "Dwarf.h"

Dwarf::Dwarf(std::string name_, int hp_ int armor_) : name(name_), Character(hp_, armor_)
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
