//
// Created by olegp on 04/11/2024.
//

#ifndef POKEMONCARD_H
#define POKEMONCARD_H

#include <tuple>
#include <vector>
#include "card.h"
using namespace std;

class PokemonCard : public Card {
public:
    using Attack = tuple<int, string, int>;

private:
    string pokemonType;
    string familyName;
    int evolutionLevel;
    int maxHP;
    int hp;
    int energy;
    vector<Attack> attacks;

public:
    PokemonCard(const string& name, const string& type, const string& family,
                int level, int max_hp, int energyCost1, const string& desc1, int dmg1,
                int energyCost2, const string& desc2, int dmg2);

    void displayInfo() const override;
    void reduceHP(int amount);
    int getHP() const;
    void restoreHP();
    int getEnergy() const { return energy; }
    const vector<Attack>& getAttacks() const { return attacks; }
    int getAttackCost(int index) const { return std::get<0>(attacks[index]); }
    std::string getAttackName(int index) const { return std::get<1>(attacks[index]); }
    int getAttackDamage(int index) const { return std::get<2>(attacks[index]); }

    bool canAttack(int attackIndex) const;
};
#endif
