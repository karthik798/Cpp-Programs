#include <iostream>
#include <vector>
#include <string>

std::string longestCommonPrefix(const std::vector<std::string>& strs) {
    if (strs.empty()) {
        return ""; // If the array is empty, there is no common prefix.
    }

    // Take the first string as the initial prefix.
    std::string prefix = strs[0];

    for (int i = 1; i < strs.size(); ++i) {
        int j = 0;
        // Compare characters until the end of the prefix or the current string.
        while (j < prefix.length() && j < strs[i].length() && prefix[j] == strs[i][j]) {
            ++j;
        }

        // Update the prefix to the common substring.
        prefix = prefix.substr(0, j);

        // If the prefix becomes empty, there is no common prefix.
        if (prefix.empty()) {
            break;
        }
    }

    return prefix;
}

int main() {
    std::vector<std::string> strings = {"flower", "flow", "flight"};
    std::string result = longestCommonPrefix(strings);

    std::cout << "Longest common prefix: " << result << "\n";

    return 0;
}
