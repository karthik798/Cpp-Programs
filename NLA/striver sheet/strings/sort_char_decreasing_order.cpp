#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>
#include <algorithm>

bool compare(const std::pair<char, int>& a, const std::pair<char, int>& b) {
    return a.second > b.second;
}

std::string frequencySort(const std::string& s) {
    std::unordered_map<char, int> charCount;

    // Count occurrences of characters in the string.
    for (char c : s) {
        charCount[c]++;
    }

    // Convert the map to a vector of pairs for sorting.
    std::vector<std::pair<char, int>> charFrequency(charCount.begin(), charCount.end());

    // Sort the vector based on frequency in decreasing order.
    std::sort(charFrequency.begin(), charFrequency.end(), compare);

    // Build the result string based on the sorted frequencies.
    std::string result;
    for (const auto& entry : charFrequency) {
        result += std::string(entry.second, entry.first);
    }

    return result;
}

int main() {
    std::string s = "tree";
    std::string sortedString = frequencySort(s);

    std::cout << "Original string: " << s << "\n";
    std::cout << "Sorted string: " << sortedString << "\n";

    return 0;
}
