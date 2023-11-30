#include "PokemonFactory.h"
#include <iostream>

int main()
{
    auto myWaterHighAttackPokemon = PokemonFactory::createPokemon("Water", "HighAttack");

    std::cout << "Type: " << myWaterHighAttackPokemon->GetType() << std::endl;
    std::cout << "Role: " << myWaterHighAttackPokemon->GetRole() << std::endl;
    std::cout << "HP: " << myWaterHighAttackPokemon->GetHP() << std::endl;
    std::cout << "Attack: " << myWaterHighAttackPokemon->GetAttack() << std::endl;
    std::cout << "Defense: " << myWaterHighAttackPokemon->GetDefense() << std::endl;
    std::cout << "WaterMod: " << myWaterHighAttackPokemon->WaterMod() << std::endl;

    auto myGrassHighDefensePokemon = PokemonFactory::createPokemon("Grass", "HighDefense");

    std::cout << "Type: " << myGrassHighDefensePokemon->GetType() << std::endl;
    std::cout << "Role: " << myGrassHighDefensePokemon->GetRole() << std::endl;
    std::cout << "HP: " << myGrassHighDefensePokemon->GetHP() << std::endl;
    std::cout << "Attack: " << myGrassHighDefensePokemon->GetAttack() << std::endl;
    std::cout << "Defense: " << myGrassHighDefensePokemon->GetDefense() << std::endl;
    std::cout << "WaterMod: " << myGrassHighDefensePokemon->WaterMod() << std::endl;

    auto myElectricBalancedPokemon = PokemonFactory::createPokemon("Electric", "Balanced");

    std::cout << "Type: " << myElectricBalancedPokemon->GetType() << std::endl;
    std::cout << "Role: " << myElectricBalancedPokemon->GetRole() << std::endl;
    std::cout << "HP: " << myElectricBalancedPokemon->GetHP() << std::endl;
    std::cout << "Attack: " << myElectricBalancedPokemon->GetAttack() << std::endl;
    std::cout << "Defense: " << myElectricBalancedPokemon->GetDefense() << std::endl;
    std::cout << "WaterMod: " << myElectricBalancedPokemon->WaterMod() << std::endl;

    auto myFireHighHPPokemon = PokemonFactory::createPokemon("Fire", "HighHP");

    std::cout << "Type: " << myFireHighHPPokemon->GetType() << std::endl;
    std::cout << "Role: " << myFireHighHPPokemon->GetRole() << std::endl;
    std::cout << "HP: " << myFireHighHPPokemon->GetHP() << std::endl;
    std::cout << "Attack: " << myFireHighHPPokemon->GetAttack() << std::endl;
    std::cout << "Defense: " << myFireHighHPPokemon->GetDefense() << std::endl;
    std::cout << "WaterMod: " << myFireHighHPPokemon->WaterMod() << std::endl;

    return 0;
}