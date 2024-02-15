#include <iostream>

int calculateXOR(int N) {
    int mod = N % 4;
    if (mod == 0) {
        return N;
    } else if (mod == 1) {
        return 1;
    } else if (mod == 2) {
        return N + 1;
    } else { // mod == 3
        return 0;
    }
}

int rangeXOR(int L, int R) {
    return calculateXOR(R) ^ calculateXOR(L - 1);
}

int main() {
    // Example usage:
    int L = 1, R = 5;

    // Calculate the XOR of the range [L, R] and print the result.
    int result = rangeXOR(L, R);

    std::cout << "XOR of elements in the range [" << L << ", " << R << "] is: " << result << std::endl;

    return 0;
}
