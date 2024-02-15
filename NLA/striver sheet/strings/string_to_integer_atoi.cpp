#include <iostream>
#include <climits>

int myAtoi(const std::string& s) {
    int i = 0;
    int sign = 1;
    int result = 0;

    // Step 1: Read and ignore leading whitespace.
    while (i < s.length() && s[i] == ' ') {
        i++;
    }

    // Step 2: Check for '+' or '-' sign.
    if (i < s.length() && (s[i] == '+' || s[i] == '-')) {
        sign = (s[i++] == '-') ? -1 : 1;
    }

    // Step 3: Read characters until the next non-digit character or end of input.
    while (i < s.length() && isdigit(s[i])) {
        int digit = s[i++] - '0';

        // Step 4: Convert digits into an integer.
        if (result > INT_MAX / 10 || (result == INT_MAX / 10 && digit > 7)) {
            return (sign == 1) ? INT_MAX : INT_MIN;
        }

        result = result * 10 + digit;
    }

    // Step 5: Apply sign and clamp to the 32-bit signed integer range.
    return sign * result;
}

int main() {
    std::string s = "42";
    int result = myAtoi(s);

    std::cout << "Input: " << s << "\n";
    std::cout << "Output: " << result << "\n";

    return 0;
}
