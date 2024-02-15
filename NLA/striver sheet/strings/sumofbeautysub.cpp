#include <iostream>
#include <string>
#include <unordered_map>

int beautySum(const std::string& s) {
    int n = s.length();
    int totalBeauty = 0;

    for (int i = 0; i < n; ++i) {
        std::unordered_map<char, int> charCount;
        int maxFrequency = 0;
        int minFrequency = n;

        for (int j = i; j < n; ++j) {
            charCount[s[j]]++;
            maxFrequency = std::max(maxFrequency, charCount[s[j]]);
            minFrequency = std::min(minFrequency, charCount[s[j]]);
            totalBeauty += (maxFrequency - minFrequency);
        }
    }

    return totalBeauty;
}

int main() {
    std::string s = "abaacc";
    int result = beautySum(s);

    std::cout << "Input string: " << s << "\n";
    std::cout << "Sum of beauty of all substrings: " << result << "\n";

    return 0;
}
