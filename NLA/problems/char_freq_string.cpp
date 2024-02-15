#include <bits/stdc++.h>
using namespace std;

void custom(string str) {
    string result;
    int n = str.size();

    for (int i = 0; i < n; i++) {
        // Count the frequency of the current character
        int count = 1;
        while (i < n - 1 && str[i] == str[i + 1]) {
            count++;
            i++;
        }

        // Append the character and its count to the result
        result += str[i];
        result += to_string(count);
    }

    cout << result;
}

int main() {
    string str = "aaabbbbcccaaa";
    custom(str);
    return 0;
}
