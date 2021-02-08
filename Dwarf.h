#pragma once

#include "Character.h"

struct Dwarf : Character
{
    const std::string& getName() override;
    std::string getStats() override;

    private:
        const std::string name;
};
