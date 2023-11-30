#include <gtest/gtest.h>
#include "PokemonFactory.h"

TEST(PokemonBattle, Battle1)
{
    std::shared_ptr<Pokemon> myPokemon = PokemonFactory::createPokemon(100, 120, 80, "HighAttack", "Water");

    std::cout << "Role: " << myPokemon->GetRole() << std::endl;
    std::cout << "Type: " << myPokemon->GetType() << std::endl;
    std::cout << "HP: " << myPokemon->GetHP() << std::endl;
    std::cout << "Attack: " << myPokemon->GetAttack() << std::endl;
    std::cout << "Defense: " << myPokemon->GetDefense() << std::endl;
}


int main(int argc, char **argv)
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
