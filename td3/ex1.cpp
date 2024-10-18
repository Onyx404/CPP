//
// Created by olegp on 18/10/2024.
//
#include <iostream>
#include <vector>
#include <map>
using namespace std;

void countFrequencyBruteForce(const vector<int>& numbers) {
    int n = numbers.size();
    vector<bool> visited(n, false);

    for (int i=0;i<n;i++) {
        if (visited[i]) {
            continue;
        }

        int count = 1;
        for (int j=i+1;j<n;j++) {
            if (numbers[i] == numbers[j]) {
                count++;
                visited[j] = true;
            }
        }
        cout << numbers[i] << " : " << count << " fois" << endl;
    }
}

map<int, int> countFrequencyOptimal(const vector<int>& numbers) {
    map<int, int> frequencyMap;

    for (int number : numbers) {
        frequencyMap[number]++;
    }

    return frequencyMap;
}

int main() {
    vector<int> numbers = {1, 2, 3, 2, 4, 1, 5, 5, 6};
    cout << "Frequency (Brute Force) : " << endl;
    countFrequencyBruteForce(numbers);


    cout << "\nFrequency (Optimal) : " << endl;
    map<int, int> frequencyMapOptimal = countFrequencyOptimal(numbers);
    for (const auto& entry : frequencyMapOptimal) {
        cout << entry.first << " : " << entry.second << " fois" << endl;
    }

    return 0;
}
