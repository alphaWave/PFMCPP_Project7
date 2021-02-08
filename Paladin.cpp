#include "Paladin.h"

Paladin::Paladin(std::string name_, int hp_, int armor_) : name(name_), Character(hp_, armor_)
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