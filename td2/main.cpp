#include <iostream>
#include <vector>
#include "search.h"

int main() {
    vector<int> data = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21};

    LinearSearch linearSearch;
    JumpSearch jumpSearch;
    BinarySearch binarySearch;

    int target = 13;

    int result = linearSearch.search(data, target);
    linearSearch.displaySearchResults(cout, result, target);

    result = jumpSearch.search(data, target);
    jumpSearch.displaySearchResults(cout, result, target);

    result = binarySearch.search(data, target);
    binarySearch.displaySearchResults(cout, result, target);

    return 0;
}
