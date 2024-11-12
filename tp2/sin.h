//
// Created by olegp on 12/11/2024.
//

#ifndef SIN_H
#define SIN_H

#include "tsgen.h"
#include <vector>
#include <cmath>
using namespace std;

class SinWaveGenerator : public TimeSeriesGenerator {
private:
    double amplitude;
    double frequency;
    double phase;

public:
    SinWaveGenerator(double A = 1.0, double w = 0.1, double phi = 0.0)
        : amplitude(A), frequency(w), phase(phi) {}

    vector<double> generateTimeSeries(int size) override;
};
#endif //SIN_H
