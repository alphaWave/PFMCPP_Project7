#pragma once

#include "Character.h"

struct Paladin : Character
{
    public:
        const std::string& getName() override;
        std::string getStats() override;

    private:
        const std::string name;
};
