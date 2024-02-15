#include <iostream>
#include <string>

std::string removeOuterParentheses(const std::string& input) {
    std::string result;
    int openCount = 0;

    for (char c : input) {
        if (c == '(') {
            if (openCount > 0) {
                result += c;
            }
            openCount++;
        } else if (c == ')') {
            openCount--;
            if (openCount > 0) {
                result += c;
            }
        }
    }

    return result;
}

int main() {
    std::string input = "((abc))";
    std::string result = removeOuterParentheses(input);

    std::cout << "Original: " << input << "\n";
    std::cout << "Without outer parentheses: " << result << "\n";

    return 0;
}
