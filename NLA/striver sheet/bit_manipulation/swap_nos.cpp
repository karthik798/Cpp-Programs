#include <iostream>

void swapUsingXOR(int &a, int &b) {
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
}

int main() {
    // Example usage:
    int a = 8, b = 5;

    std::cout << "Before swapping: a = " << a << ", b = " << b << "\n";

    // Swap values using XOR.
    swapUsingXOR(a, b);

    std::cout << "After swapping: a = " << a << ", b = " << b << "\n";

    return 0;
}
