//
// Created by olegp on 04/11/2024.
//
// src/player.cpp
#include "player.h"
#include <iostream>
#include "TrainerCard.h"
using namespace std;
Player::Player(const string& name) : playerName(name) {}

Player::~Player() {
    for (Card* card : bench) {
        delete card;
    }
}

void Player::addCardToBench(Card* card) {
    bench.push_back(card);
}

void Player::displayBench() const {
    cout << "Bench cards for Player " << playerName << " :\n";
    for (int i = 0; i < bench.size(); ++i) {
        bench[i]->displayInfo();
    }
}

void Player::activatePokemonCard(int index) {
    if (index < bench.size() && dynamic_cast<PokemonCard*>(bench[index])) {
        activePokemon = dynamic_cast<PokemonCard*>(bench[index]);
        cout << playerName << " is activating a Pokemon Card : " << activePokemon->getName() << endl;
    } else {
        cout << "Invalid card or index" << endl;
    }
}

void Player::attachEnergyCard(int benchIndex, int energyIndex) {
    if (activePokemon && benchIndex < bench.size() && dynamic_cast<EnergyCard*>(bench[benchIndex])) {
        cout << playerName << " is attaching Energy Card of type " << dynamic_cast<EnergyCard*>(bench[benchIndex])->getEnergyType()
             << " to the Pokemon " << activePokemon->getName() << endl;
    } else {
        cout << "Energy attachment failed" << endl;
    }
}

void Player::displayAction() const {
    if (activePokemon) {
        cout << "Action cards for Player " << playerName << " :\n";
        activePokemon->displayInfo();
        for (int i = 0; i < activePokemon->getAttacks().size(); ++i) {
            cout << "Attack #" << i << ":\n";
            cout << "Attack cost: " << activePokemon->getAttackCost(i) << "\n";
            cout << "Attack current energy storage: " << activePokemon->getEnergy() << "\n";
            cout << "Attack description: " << activePokemon->getAttackName(i) << "\n";
            cout << "Attack damage: " << activePokemon->getAttackDamage(i) << "\n";
        }
    } else {
        cout << "No active Pokemon" << endl;
    }
}

void Player::attack(int attackerIndex, int attackIndex, Player& opponent, int opponentIndex) {
    if (activePokemon) {
        int damage = activePokemon->getAttackDamage(attackIndex);
        cout << playerName << " attacking " << opponent.playerName << " ’s Pokemon " << opponent.activePokemon->getName()
             << " with the Pokemon " << activePokemon->getName() << " with its attack : " << activePokemon->getAttackName(attackIndex) << "\n";
        cout << "Reducing " << damage << " from " << opponent.activePokemon->getName() << " ’s HP\n";
        opponent.activePokemon->reduceHP(damage);
        if (opponent.activePokemon->getHP() <= 0) {
            cout << "Pokemon " << opponent.activePokemon->getName() << " is still alive\n";
        }
    }
}

void Player::useTrainer(int trainerIndex) {
    if (trainerIndex < bench.size() && dynamic_cast<TrainerCard*>(bench[trainerIndex])) {
        cout << playerName << " is using the Trainer Card to " << dynamic_cast<TrainerCard*>(bench[trainerIndex])->getEffect() << endl;
    }
}