#include <iostream>

#include "Dwarf.h"

//Dwarf::Dwarf

const std::string& Dwarf::getName()
{
    return name;
}

std::string Dwarf::getStats()
{
    return Utility::getCharacterStats(this);
}