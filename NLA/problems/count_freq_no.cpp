#include<bits/stdc++.h>

using namespace std;

int most_repeated_no(vector<int> numbers) {
    map<int, int> mp;

    for (int num : numbers) {
        mp[num]++;
    }

    int most_repeated_no = 0;
    int maxc = 0;

    for (auto n : mp) {
        if (n.second > maxc) {
            maxc = n.second;
        }
    }
    return maxc;
}

int main() {
    vector<int> numbers = {1, 2, 3, 4, 5, 1};
    int result = most_repeated_no(numbers);
    cout << "Most repeated number: " << result << endl;
    return 0;
}
