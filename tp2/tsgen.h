//
// Created by olegp on 12/11/2024.
//

#ifndef TSGEN_H
#define TSGEN_H

#include <vector>
using namespace std;

class TimeSeriesGenerator {
public:
    int seed;

    TimeSeriesGenerator() : seed(0) {}
    TimeSeriesGenerator(int s) : seed(s) {}

    virtual vector<double> generateTimeSeries(int size) = 0;
    static void printTimeSeries(const vector<double>& series);
};

#endif //TSGEN_H
