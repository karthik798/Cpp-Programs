#include <iostream>
#include <string>
#include <map>

using namespace std;


void non_repeating_char(const std::string& str) {
    std::map<char, int> mp;

    // Counting frequency of characters
    for (char ch : str) {
        mp[ch]++;
    }

    // Displaying non-repeating characters
    for (auto entry : mp) {
        if (entry.second == 1) {
            cout << entry.first << " ";
        }
    }
    // cout << endl;
}

int main() {
    string str = "abcab";
    non_repeating_char(str);
    return 0;
}
