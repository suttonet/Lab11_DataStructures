#pragma once

#include "IRole.h"

class Balanced : public IRole {
public:
    Balanced() : IRole("Balanced") 
    {
        m_hp = 84;
        m_attack = 83;
        m_defense = 83;
    }

    std::string GetRole() override {
        return "Balanced";
    }

    ~Balanced() override {}
};
