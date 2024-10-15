//
// Created by olegp on 11/10/2024.
//
#include <vector>
#include <iostream>
#ifndef SEARCH_H
#define SEARCH_H


using namespace std;

class SearchingAlgorithm {
    public:
    int numberComparisons;
    static int totalComparisons;
    static int totalSearche;
    static double averageComparisons;
    SearchingAlgorithm();
    virtual int search(const vector<int>&,int) = 0;
    void displaySearchResults();
};
#endif //SEARCH_H