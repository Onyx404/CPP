//
// Created by olegp on 04/11/2024.
//
#include "pokemoncard.h"
#include <iostream>
using namespace std;

PokemonCard::PokemonCard(const string& name, const string& type, const string& family,
                         int level, int max_hp, int energyCost1, const string& desc1, int dmg1,
                         int energyCost2, const string& desc2, int dmg2)
    : Card(name), pokemonType(type), familyName(family), evolutionLevel(level), maxHP(max_hp), hp(max_hp), energy(0) {
    attacks.push_back({energyCost1, desc1, dmg1});
    attacks.push_back({energyCost2, desc2, dmg2});
}

void PokemonCard::displayInfo() const {
    cout << "Pokemon Card - Name : " << cardName
         << ", Type : " << pokemonType
         << ", Evolution Level : " << evolutionLevel
         << " of the family " << familyName
         << ", HP : " << hp << "/" << maxHP << endl;
}

void PokemonCard::reduceHP(int amount) {
    hp = max(0, hp - amount);
}

int PokemonCard::getHP() const {
    return hp;
}

void PokemonCard::restoreHP() {
    hp = maxHP;
}

bool PokemonCard::canAttack(int attackIndex) const {
    return energy >= getAttackCost(attackIndex);
}

