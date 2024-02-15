#include <iostream>
#include <vector>

using namespace std;

bool hasElementWithHalfSum(const vector<int>& arr) {
    int n = arr.size();
    int totalSum = 0;

    // Calculate the total sum of the array
    for (int i = 0; i < n; i++) {
        totalSum += arr[i];
    }

    if (totalSum % 2 != 0) {
        return false;
    }

    int target = totalSum / 2;
    int low = 0, high = n - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == target) {
            return true;
        } else if (arr[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    return false;
}

int main() {
    vector<int> sortedArray = {1, 2, 3, 6, 9, 12};
    if (hasElementWithHalfSum(sortedArray)) {
        cout << "There exists an element with half the sum.\n";
    } else {
        cout << "No such element exists.\n";
    }
    return 0;
}
