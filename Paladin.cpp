#include "Paladin.h"

// Paladin::Paladin

const std::string& Paladin::getName()
{
    return name;
}

std::string& Paladin::getStats()
{
    Utility::getCharacterStats(this);
}