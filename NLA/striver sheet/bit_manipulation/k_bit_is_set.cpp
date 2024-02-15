#include <iostream>

bool isKthBitSet(int N, int K) {
    // Left shift 1 by K-1 positions to create a mask with only the Kth bit set.
    int mask = 1 << (K - 1);

    // Check if the Kth bit is set in N by bitwise AND operation with the mask.
    return (N & mask) != 0;
}

int main() {
    // Example usage:
    int N = 5;
    int K = 1;

    // Check if the Kth bit is set in N.
    if (isKthBitSet(N, K)) {
        std::cout << "YES\n";
    } else {
        std::cout << "NO\n";
    }

    return 0;
}
