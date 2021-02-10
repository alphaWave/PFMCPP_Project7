#pragma once

#include "Item.h"
#include "Character.h"
// #include "Dwarf.h"
// #include "Paladin.h"
// #include "DragonSlayer.h"
// #include "Dragon.h"

struct AttackItem : Item
{
    AttackItem() : Item("attack item", 10) {}
    void use(Character* character) override;
};
