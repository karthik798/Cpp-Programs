#include <iostream>
#include <unordered_map>

using namespace std;

int appears_b_times(int arr[], int size, int a, int b) {
    unordered_map<int, int> mp;

    for (int i = 0; i < size; i++) {
        mp[arr[i]]++;
    }

    for (auto it : mp) {
        if (it.second == b) {
            return it.first;
        }
    }

    return -1; // Element not found
}

int main() {
    int arr[] = {1, 1, 2, 2, 2, 3, 3, 3};
    int size = sizeof(arr) / sizeof(arr[0]);
    int a = 3, b = 2;

    int result = appears_b_times(arr, size, a, b);

    if (result != -1) {
        cout << "Element that occurs " << b << " times: " << result << endl;
    } else {
        cout << "No element found with " << b << " occurrences." << endl;
    }

    return 0;
}
