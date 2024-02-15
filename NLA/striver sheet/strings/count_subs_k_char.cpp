#include <iostream>
#include <unordered_map>

int countSubstringsWithKDistinctChars(const std::string& str, int k) {
    int n = str.length();
    int count = 0;

    for (int i = 0; i < n; ++i) {
        std::unordered_map<char, int> charCount;

        for (int j = i; j < n; ++j) {
            charCount[str[j]]++;

            if (charCount.size() == k) {
                count++;
            } else if (charCount.size() > k) {
                break; // No need to check further for this window.
            }
        }
    }

    return count;
}

int main() {
    std::string str = "abcad";
    int k = 2;
    int result = countSubstringsWithKDistinctChars(str, k);

    std::cout << "Input string: " << str << "\n";
    std::cout << "k: " << k << "\n";
    std::cout << "Count of substrings with exactly " << k << " distinct characters: " << result << "\n";

    return 0;
}
