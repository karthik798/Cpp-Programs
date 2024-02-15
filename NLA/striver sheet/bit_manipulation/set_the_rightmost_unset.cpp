#include <iostream>

int setRightmostUnsetBit(int N) {
    // If N is already all ones, return it.
    if (N == -1 || N == 0)
        return N;

    // Find the rightmost unset bit and set it.
    return N | (N + 1);
}

int main() {
    // Example usage:
    int N = 5;

    // Set the rightmost unset bit and print the result.
    int result = setRightmostUnsetBit(N);

    std::cout << "After setting the rightmost unset bit, the number becomes: " << result << "\n";

    return 0;
}
