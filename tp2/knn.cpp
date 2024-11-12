//
// Created by olegp on 12/11/2024.
//

#include "knn.h"
#include <cmath>
#include <algorithm>
#include <limits>
using namespace std;

double KNN::evaluate(const TimeSeriesDataset& trainData, const TimeSeriesDataset& testData, const vector<int>& groundTruth) {
    int correctPredictions = 0;
    int totalTestData = testData.getNumberOfSamples();  // Utilisation de l'accesseur

    for (int i = 0; i < totalTestData; i++) {
        int predictedLabel = classify(testData.getData()[i], trainData);  // Utilisation de l'accesseur
        if (predictedLabel == groundTruth[i]) {
            correctPredictions++;
        }
    }
    return static_cast<double>(correctPredictions) / totalTestData;
}

int KNN::classify(const vector<double>& testSeries, const TimeSeriesDataset& trainData) {
    vector<pair<double, int>> distances;

    for (int i = 0; i < trainData.getNumberOfSamples(); i++) {  // Utilisation de l'accesseur
        double dist = calculateSimilarity(testSeries, trainData.getData()[i]);  // Utilisation de l'accesseur
        distances.push_back({dist, trainData.getLabels()[i]});  // Utilisation de l'accesseur
    }

    sort(distances.begin(), distances.end());

    vector<int> votes(3, 0);  // Assuming 3 classes for simplicity
    for (int i = 0; i < k; i++) {
        votes[distances[i].second]++;
    }

    return distance(votes.begin(), max_element(votes.begin(), votes.end()));
}

double KNN::calculateSimilarity(const vector<double>& series1, const vector<double>& series2) {
    double sum = 0.0;
    int size = series1.size();

    if (similarityMeasure == "euclidean_distance") {
        for (int i = 0; i < size; i++) {
            sum += (series1[i] - series2[i]) * (series1[i] - series2[i]);
        }
        return sqrt(sum);
    }
    else if (similarityMeasure == "dtw") {
        // Implement DTW similarity calculation (omitted for brevity)
        return sum; // Placeholder for DTW calculation
    }
    return sum;
}