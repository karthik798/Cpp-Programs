#include <iostream>
#include <vector>
#include <map>

using namespace std;

int lucky_no(const vector<int>& arr) {
    int sum = 0;
    map<int, int> mp;

    for (auto count : arr) {
        mp[count]++;
    }

    for (const auto& pair : mp) {
        if (pair.second % 2 == 1) {
            sum += pair.first * pair.second; // Add the value, not the frequency
        }
    }

    return sum;
}

int main() {
    vector<int> arr = {100,200,300,40,40};
    int result = lucky_no(arr);

    cout << result << endl;

    return 0;
}
