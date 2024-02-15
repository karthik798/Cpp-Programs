#include <iostream>
#include <climits>

int divide(int dividend, int divisor) {
    // Handle special cases
    if (dividend == INT_MIN && divisor == -1) {
        return INT_MAX;
    }

    // Determine the sign of the result
    int sign = (dividend < 0) ^ (divisor < 0) ? -1 : 1;

    // Convert both dividend and divisor to positive
    long long ldividend = llabs(dividend);
    long long ldivisor = llabs(divisor);

    // Initialize result
    long long quotient = 0;

    // Perform long division
    while (ldividend >= ldivisor) {
        long long temp = ldivisor;
        long long multiple = 1;

        // Keep doubling the divisor until it exceeds the dividend
        while (ldividend >= (temp << 1)) {
            temp <<= 1;
            multiple <<= 1;
        }

        // Subtract the multiple of divisor from dividend
        ldividend -= temp;
        quotient += multiple;
    }

    // Apply the sign to the result
    return sign * static_cast<int>(quotient);
}

int main() {
    // Example usage:
    int dividend = 10, divisor = 3;

    // Perform integer division and print the result
    int result = divide(dividend, divisor);

    std::cout << "Result of division: " << result << std::endl;

    return 0;
}
