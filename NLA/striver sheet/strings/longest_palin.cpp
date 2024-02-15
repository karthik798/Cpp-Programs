#include <iostream>
#include <vector>

std::string longestPalindrome(const std::string& s) {
    int n = s.length();
    std::vector<std::vector<bool>> isPalindrome(n, std::vector<bool>(n, false));

    // All substrings of length 1 are palindromes.
    for (int i = 0; i < n; ++i) {
        isPalindrome[i][i] = true;
    }

    int start = 0; // Start index of the longest palindromic substring.
    int maxLength = 1; // Length of the longest palindromic substring.

    // Check substrings of length 2.
    for (int i = 0; i < n - 1; ++i) {
        if (s[i] == s[i + 1]) {
            isPalindrome[i][i + 1] = true;
            start = i;
            maxLength = 2;
        }
    }

    // Check substrings of length 3 or more.
    for (int length = 3; length <= n; ++length) {
        for (int i = 0; i <= n - length; ++i) {
            int j = i + length - 1;

            // Check if the current substring is a palindrome.
            if (s[i] == s[j] && isPalindrome[i + 1][j - 1]) {
                isPalindrome[i][j] = true;
                start = i;
                maxLength = length;
            }
        }
    }

    return s.substr(start, maxLength);
}

int main() {
    std::string s = "babad";
    std::string result = longestPalindrome(s);

    std::cout << "Input string: " << s << "\n";
    std::cout << "Longest palindromic substring: " << result << "\n";

    return 0;
}
