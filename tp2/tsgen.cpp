//
// Created by olegp on 12/11/2024.
//
#include "tsgen.h"
#include <iostream>
using namespace std;

void TimeSeriesGenerator::printTimeSeries(const vector<double>& series) {
    for (const double& value : series) {
        cout << value << " ";
    }
    cout << endl;
}