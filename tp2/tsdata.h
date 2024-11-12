//
// Created by olegp on 12/11/2024.
//

#ifndef TSDATA_H
#define TSDATA_H

#include <vector>
#include <iostream>
using namespace std;


class TimeSeriesDataset {
private:
    bool znormalize;
    bool isTrain;
    int maxLength;
    int numberOfSamples;
    vector<vector<double>> data;
    vector<int> labels;

public:
    TimeSeriesDataset(bool znorm, bool train)
        : znormalize(znorm), isTrain(train), maxLength(0), numberOfSamples(0) {}

    void addTimeSeries(const vector<double>& series, int label);
    void addTimeSeries(const vector<double>& series);
    void normalize();

    // Accesseurs publics pour accéder aux membres privés
    int getNumberOfSamples() const { return numberOfSamples; }
    const vector<vector<double>>& getData() const { return data; }
    const vector<int>& getLabels() const { return labels; }
};
#endif //TSDATA_H
