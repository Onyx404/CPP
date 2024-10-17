#include "search.h"

int SearchingAlgorithm::totalComparisons = 0;
int SearchingAlgorithm::totalSearches = 0;
double SearchingAlgorithm::averageComparisons = 0.0;

SearchingAlgorithm::SearchingAlgorithm() : numberComparisons(0) {}

void SearchingAlgorithm::displaySearchResults(ostream& os, int result, int target) const {
    totalSearches++;
    if (result == -1) {
        os << "Searching for the element " << target << " was not successful.\n";
    } else {
        totalComparisons += numberComparisons;
        averageComparisons = static_cast<double>(totalComparisons) / totalSearches;
        os << "Element " << target << " found at index " << result << " after "
           << numberComparisons << " comparisons.\n";
    }
    os << "Total searches: " << totalSearches << ", total comparisons: "
       << totalComparisons << ", average comparisons: " << averageComparisons << "\n\n";
}

int LinearSearch::search(const vector<int>& data, int target) {
    numberComparisons = 0;
    for (int i = 0; i < data.size(); ++i) {
        numberComparisons++;
        if (data[i] == target) {
            return i;
        }
    }
    return -1;
}

int JumpSearch::search(const vector<int>& data, int target) {
    int n = data.size();
    int step = sqrt(n);
    int prev = 0;
    numberComparisons = 0;

    while (data[min(step, n) - 1] < target) {
        numberComparisons++;
        prev = step;
        step += sqrt(n);
        if (prev >= n)
            return -1;
    }

    for (int i = prev; i < min(step, n); ++i) {
        numberComparisons++;
        if (data[i] == target)
            return i;
    }

    return -1;
}

int BinarySearch::search(const vector<int>& data, int target) {
    int left = 0, right = data.size() - 1;
    numberComparisons = 0;

    while (left <= right) {
        numberComparisons++;
        int mid = left + (right - left) / 2;

        if (data[mid] == target)
            return mid;
        else if (data[mid] < target)
            left = mid + 1;
        else
            right = mid - 1;
    }

    return -1;
}
