//
// Created by olegp on 04/11/2024.
//

#ifndef PLAYER_H
#define PLAYER_H

#include "pokemoncard.h"
#include "energycard.h"
#include <string>
#include <vector>
using namespace std;

class Player {
private:
    string playerName;
    vector<Card*> bench;
    PokemonCard* activePokemon = nullptr;

public:
    Player(const string& name);
    ~Player();

    void addCardToBench(Card* card);
    void displayBench() const;
    void activatePokemonCard(int index);
    void attachEnergyCard(int benchIndex, int energyIndex);
    void displayAction() const;
    void attack(int attackerIndex, int attackIndex, Player& opponent, int opponentIndex);
    void useTrainer(int trainerIndex);
};

#endif //PLAYER_H
