//
// Created by olegp on 04/11/2024.
//

#ifndef ENERGYCARD_H
#define ENERGYCARD_H
#include "card.h"


using namespace std;

class EnergyCard : public Card {
private:
    string energyType;

public:
    EnergyCard(const string& type);
    void displayInfo() const override;
    string getEnergyType() const;
};
#endif //ENERGYCARD_H
