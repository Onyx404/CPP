//
// Created by olegp on 12/11/2024.
//

#ifndef STP_H
#define STP_H

#include "tsgen.h"
#include <vector>
#include <cstdlib>
using namespace std;

class StepGenerator : public TimeSeriesGenerator {
public:
    StepGenerator() {}

    vector<double> generateTimeSeries(int size) override;
};

#endif //STP_H
