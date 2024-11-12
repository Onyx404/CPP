//
// Created by olegp on 12/11/2024.
//

#ifndef KNN_H
#define KNN_H

#include "tsdata.h"
#include <vector>
#include <string>
using namespace std;

class KNN {
private:
    int k;
    string similarityMeasure;

public:
    KNN(int kVal, string measure) : k(kVal), similarityMeasure(measure) {}

    double evaluate(const TimeSeriesDataset& trainData, const TimeSeriesDataset& testData, const vector<int>& groundTruth);
    int classify(const vector<double>& testSeries, const TimeSeriesDataset& trainData);
    double calculateSimilarity(const vector<double>& series1, const vector<double>& series2);
};

#endif //KNN_H
