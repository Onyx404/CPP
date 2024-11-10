//
// Created by olegp on 04/11/2024.
//

#ifndef CARD_H
#define CARD_H

#include <string>
#include <iostream>

using namespace std;

class Card {
    protected:
    string cardName;

    public:
        Card(const string& name) : cardName(name) {}
        virtual ~Card() = default;

        virtual void displayInfo() const = 0;
        string getName() const { return cardName; }

};
#endif //CARD_H
