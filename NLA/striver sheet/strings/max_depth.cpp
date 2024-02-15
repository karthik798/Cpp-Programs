#include <iostream>
#include <string>

int maxDepth(const std::string& s) {
    int depth = 0;
    int maxDepth = 0;

    for (char c : s) {
        if (c == '(') {
            depth++;
            maxDepth = std::max(maxDepth, depth);
        } else if (c == ')') {
            depth--;
        }
    }

    return maxDepth;
}

int main() {
    std::string s = "()(()())";
    int nestingDepth = maxDepth(s);

    std::cout << "String: " << s << "\n";
    std::cout << "Nesting Depth: " << nestingDepth << "\n";

    return 0;
}
