//
// Created by olegp on 04/11/2024.
//

#ifndef TRAINERCARD_H
#define TRAINERCARD_H

#include "card.h"
using namespace std;

class TrainerCard : public Card {
private:
    string effect;

public:
    TrainerCard(const string& name, const string& effect);
    void displayInfo() const override;
    string getEffect() const;
};
#endif //TRAINERCARD_H
