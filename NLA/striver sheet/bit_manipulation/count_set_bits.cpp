#include <iostream>

int countSetBits(int N) {
    int count = 0;
    while (N) {
        N = N & (N - 1);
        count++;
    }
    return count;
}

int countSetBitsInRange(int N) {
    int totalSetBits = 0;
    for (int i = 1; i <= N; ++i) {
        totalSetBits += countSetBits(i);
    }
    return totalSetBits;
}

int main() {
    // Example usage:
    int N = 4;

    // Count the total number of set bits in the binary representation from 1 to N.
    int result = countSetBitsInRange(N);

    std::cout << "The total number of set bits from 1 to " << N << " is: " << result << "\n";

    return 0;
}
