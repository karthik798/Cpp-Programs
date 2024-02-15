#include <iostream>

bool isPowerOfTwo(int N) {
    // Check if there is only one bit set.
    return (N > 0) && ((N & (N - 1)) == 0);
}

int main() {
    // Example usage:
    int number = 4;

    // Check if the number is a power of two.
    if (isPowerOfTwo(number)) {
        std::cout << number << " is a power of two.\n";
    } else {
        std::cout << number << " is not a power of two.\n";
    }

    return 0;
}
