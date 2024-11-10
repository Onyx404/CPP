//
// Created by olegp on 04/11/2024.
//
#include "trainercard.h"
#include <iostream>
using namespace std;

TrainerCard::TrainerCard(const string& name, const string& effect) : Card(name), effect(effect) {}

void TrainerCard::displayInfo() const {
    cout << "Trainer Card - Name: " << cardName << ", Effect: " << effect << endl;
}

string TrainerCard::getEffect() const {
    return effect;
}