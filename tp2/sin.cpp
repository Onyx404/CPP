//
// Created by olegp on 12/11/2024.
//

#include "sin.h"
using namespace std;

vector<double> SinWaveGenerator::generateTimeSeries(int size) {
    vector<double> series;
    for (int i = 0; i < size; i++) {
        double value = amplitude * sin(frequency * i + phase);
        series.push_back(value);
    }
    return series;
}
