#include <iostream>
#include <unordered_set>
using namespace std;

int custom(string arr[], int n, int size) {
    unordered_set<int> ind;  // Corrected variable name from 's' to 'ind'

    for (int i = 0; i < size; i++) {
        int mx = 0;
        for (int j = 0; j < n; j++)
            mx = max(mx, (int)(arr[i][j] - '0'));  // Corrected variable name from 's' to 'arr'

        for (int j = 0; j < n; j++)
            if (arr[i][j] - '0' == mx)
                ind.insert(i);
    }

    return ind.size();
}

int main() {
    string arr[] = {"223", "232", "132"};
    int n = 3;
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << custom(arr, n, size) << endl;

    return 0;
}
