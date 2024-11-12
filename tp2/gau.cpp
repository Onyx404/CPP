//
// Created by olegp on 12/11/2024.
//
#include "gau.h"
using namespace std;

vector<double> GaussianGenerator::generateTimeSeries(int size) {
    vector<double> series;
    series.reserve(size);

    for (int i = 0; i < size; i++) {
        double u1 = (rand() + 1.0) / (RAND_MAX + 1.0);  // Box-Muller method
        double u2 = (rand() + 1.0) / (RAND_MAX + 1.0);
        double z0 = sqrt(-2 * log(u1)) * cos(2 * M_PI * u2); // Box-Muller transformation
        series.push_back(mean + z0 * stddev); // Apply mean and stddev
    }
    return series;
}