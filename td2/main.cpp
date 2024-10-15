#include <iostream>
#include "search.h"

double SearchingAlgorithm::avarageComparisons=0.0;
SearchingAlgorithm::SearchingAlgorithm(): numberComparisons(0) {}

void SearchingAlgorithm::displaySearchResults(ostream& os, int result, int target) const{
    totalSearche++;

    if (result == -1) {
        os << "Searching for the element"<< target<< " was not successful";
    } else {
        totalComparisons+=numberComparisons;
        averageComparisons=static_cast<double>(totalComparisons)/totalSearche;
        os<<"It took a total of" << numberComparisons<<" comparisons";
    }
    os << endl << endl;

}




