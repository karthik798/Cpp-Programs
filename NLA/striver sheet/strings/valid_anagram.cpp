#include <iostream>
#include <unordered_map>

bool isAnagram(const std::string& s, const std::string& t) {
    if (s.length() != t.length()) {
        return false; // Anagrams must have the same length.
    }

    std::unordered_map<char, int> charCount;

    // Count occurrences of characters in string s.
    for (char c : s) {
        charCount[c]++;
    }

    // Decrement the count for characters in string t.
    for (char c : t) {
        charCount[c]--;
    }

    // Check if all counts are zero.
    for (const auto& entry : charCount) {
        if (entry.second != 0) {
            return false;
        }
    }

    return true;
}

int main() {
    std::string s = "anagram";
    std::string t = "nagaram";

    if (isAnagram(s, t)) {
        std::cout << "The strings are anagrams.\n";
    } else {
        std::cout << "The strings are not anagrams.\n";
    }

    return 0;
}
