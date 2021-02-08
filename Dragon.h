#pragma once

#include "Character.h"

struct Dragon : Character
{
    const std::string& getName() override;
    std::string getStats() override;
    void attack(Character& other) override;
    
    private:
        const std::string name;
};
