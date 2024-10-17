#ifndef SEARCH_H
#define SEARCH_H

#include <vector>
#include <iostream>
#include <cmath>

using namespace std;

class SearchingAlgorithm {
public:
    int numberComparisons;
    static int totalComparisons;
    static int totalSearches;
    static double averageComparisons;

    SearchingAlgorithm();
    virtual int search(const vector<int>& data, int target) = 0;
    void displaySearchResults(ostream& os, int result, int target) const;
};

class LinearSearch : public SearchingAlgorithm {
public:
    int search(const vector<int>& data, int target) override;
};

class JumpSearch : public SearchingAlgorithm {
public:
    int search(const vector<int>& data, int target) override;
};

class BinarySearch : public SearchingAlgorithm {
public:
    int search(const vector<int>& data, int target) override;
};

#endif
