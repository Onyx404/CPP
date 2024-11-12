//
// Created by olegp on 12/11/2024.
//

#include "tsgen.h"

TimeSeriesGenerator::TimeSeriesGenerator() : seed(0) {}
TimeSeriesGenerator::TimeSeriesGenerator(int s) : seed(s) {}

void TimeSeriesGenerator::printTimeSeries(const vector<double>& series) {
    for (double val : series) {
        cout << val << " ";
    }
    cout << endl;
}