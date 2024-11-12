//
// Created by olegp on 12/11/2024.
//

#ifndef TSGEN_H
#define TSGEN_H
#include <vector>
#include <iostream>
using namespace std;

class TimeSeriesGenerator {
protected:
    int seed;

public:
    // Constructeurs
    TimeSeriesGenerator();
    TimeSeriesGenerator(int s);

    // Méthodes virtuelles
    virtual vector<double> generateTimeSeries(int size) = 0;

    // Méthode statique pour imprimer la série temporelle
    static void printTimeSeries(const vector<double>& series);
};
#endif //TSGEN_H
