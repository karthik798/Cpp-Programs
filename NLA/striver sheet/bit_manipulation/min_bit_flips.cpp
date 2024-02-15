#include <iostream>

int countSetBits(int n) {
    int count = 0;
    while (n) {
        n = n & (n - 1);
        count++;
    }
    return count;
}

int minFlips(int start, int goal) {
    // Find the XOR of start and goal, then count set bits in the XOR result.
    int xorResult = start ^ goal;
    return countSetBits(xorResult);
}

int main() {
    // Example usage:
    int start = 10, goal = 7;

    // Calculate the minimum number of bit flips and print the result.
    int result = minFlips(start, goal);

    std::cout << "Minimum number of bit flips: " << result << std::endl;

    return 0;
}
