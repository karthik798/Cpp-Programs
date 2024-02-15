#include <iostream>
#include <string>

std::string largestOddNumber(const std::string& num) {
    for (int i = num.size() - 1; i >= 0; --i) {
        if ((num[i] - '0') % 2 == 1) {
            return num.substr(0, i + 1);
        }
    }

    return "";
}

int main() {
    std::string num = "123456";
    std::string result = largestOddNumber(num);

    if (result.empty()) {
        std::cout << "No odd integer exists.\n";
    } else {
        std::cout << "Largest odd integer: " << result << "\n";
    }

    return 0;
}
