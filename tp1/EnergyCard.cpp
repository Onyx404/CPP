//
// Created by olegp on 04/11/2024.
//

#include "energycard.h"
#include <iostream>
using namespace std;

EnergyCard::EnergyCard(const string& type)
    : Card("Energy"), energyType(type) {}

void EnergyCard::displayInfo() const {
    cout << "Energy Card - Type: " << energyType << endl;
}

string EnergyCard::getEnergyType() const {
    return energyType;
}