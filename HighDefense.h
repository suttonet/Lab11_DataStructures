#include "IRole.h"

class HighDefense : public IRole {
public:
    HighDefense() : IRole("HighDefense") 
    {
        m_hp = 100;
        m_attack = 50;
        m_defense = 100;
    }

    std::string GetRole() override {
        return "HighDefense";
    }

    ~HighDefense() override {}
};
