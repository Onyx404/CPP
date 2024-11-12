//
// Created by olegp on 12/11/2024.
//

#include "stp.h"
using namespace std;

vector<double> StepGenerator::generateTimeSeries(int size) {
    vector<double> series;
    series.push_back(0);  // Initial value is 0

    for (int i = 1; i < size; i++) {
        if (rand() % 2 == 0) {
            series.push_back(rand() % 101);  // Random value between 0 and 100
        } else {
            series.push_back(series[i - 1]);  // Keep previous value
        }
    }
    return series;
}