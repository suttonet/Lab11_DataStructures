#include "IRole.h"

IRole::IRole()
{
}

IRole::IRole(const std::string &role)
{
}

IRole::~IRole()
{
}

double IRole::GetHP()
{
    return m_hp;
}

int IRole::GetAttack()
{
    return m_attack;
}

int IRole::GetDefense()
{
    return m_defense;
}

std::string IRole::GetRole()
{
    return m_role;
}
