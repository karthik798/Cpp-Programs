#include <iostream>
#include <unordered_map>

int romanToInt(const std::string& s) {
    std::unordered_map<char, int> romanValues{
        {'I', 1},
        {'V', 5},
        {'X', 10},
        {'L', 50},
        {'C', 100},
        {'D', 500},
        {'M', 1000}
    };

    int result = 0;

    for (int i = 0; i < s.length(); ++i) {
        int currentVal = romanValues[s[i]];

        // Check for subtraction rule.
        if (i < s.length() - 1 && romanValues[s[i + 1]] > currentVal) {
            result -= currentVal;
        } else {
            result += currentVal;
        }
    }

    return result;
}

int main() {
    std::string romanNumeral = "XXVII";
    int result = romanToInt(romanNumeral);

    std::cout << "Roman Numeral: " << romanNumeral << "\n";
    std::cout << "Integer Value: " << result << "\n";

    return 0;
}
