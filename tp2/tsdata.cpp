//
// Created by olegp on 12/11/2024.
//

#include "tsdata.h"
#include <cmath>
#include <numeric>
using namespace std;

void TimeSeriesDataset::addTimeSeries(const vector<double>& series, int label) {
    data.push_back(series);
    labels.push_back(label);
    if (series.size() > maxLength) {
        maxLength = series.size();
    }
    numberOfSamples++;
}

void TimeSeriesDataset::addTimeSeries(const vector<double>& series) {
    data.push_back(series);
    numberOfSamples++;
}

void TimeSeriesDataset::normalize() {
    if (!znormalize) return;

    for (auto& series : data) {
        double mean = accumulate(series.begin(), series.end(), 0.0) / series.size();
        double variance = 0.0;
        for (auto val : series) {
            variance += (val - mean) * (val - mean);
        }
        double stddev = sqrt(variance / series.size());

        for (auto& val : series) {
            val = (val - mean) / stddev;  // Normalize the series
        }
    }
}