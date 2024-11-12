//
// Created by olegp on 12/11/2024.
//

#ifndef GAU_H
#define GAU_H

#include "tsgen.h"
#include <vector>
#include <cmath>
#include <cstdlib>
using namespace std;

class GaussianGenerator : public TimeSeriesGenerator {
private:
    double mean;
    double stddev;

public:
    GaussianGenerator(double m = 0.0, double sd = 1.0) : mean(m), stddev(sd) {}

    vector<double> generateTimeSeries(int size) override;
};

#endif //GAU_H
