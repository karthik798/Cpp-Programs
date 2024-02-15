#include <bits/stdc++.h>

std::string reverseWords(const std::string& s) {
    std::istringstream iss(s);
    std::vector<std::string> words;

    // Split the string into words.
    std::string word;
    while (iss >> word) {
        words.push_back(word);
    }

    // Reverse the order of words.
    std::reverse(words.begin(), words.end());

    // Join the reversed words into a string.
    std::string result;
    for (const std::string& w : words) {
        if (!result.empty()) {
            result += ' ';
        }
        result += w;
    }

    return result;
}

int main() {
    std::string s = "the sky is blue";
    std::string result = reverseWords(s);

    std::cout << "Input string: " << s << "\n";
    std::cout << "Reversed words: " << result << "\n";

    return 0;
}
