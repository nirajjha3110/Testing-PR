#include<iostream>
#include<vector>
using namespace std;

pair<int, int> findMinMax(vector<int> arr, int n) {
    int min = INT_MAX;
    int max = INT_MIN;

    pair<int, int> result;

    for(int i = 0; i < n; i++) {
        if(arr[i] < min) {
            min = arr[i];
        } else if(arr[i] > max) {
            max = arr[i];
        }
    }

    result.first = min;
    result.second = max;

    return result;
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> minMax(n);

    cout << "Enter the element in the array: ";
    for(int i = 0; i < n; i++) {
        cin >> minMax[i];
    }

    pair<int, int> minMaxElement = findMinMax(minMax, n);

    cout << "Minimum Element: " << minMaxElement.first << endl;
    cout << "Maximum Element: " << minMaxElement.second << endl;
}