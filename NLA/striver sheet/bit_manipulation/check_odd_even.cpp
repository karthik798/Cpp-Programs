#include <iostream>

std::string checkOddEven(int N) {
    // Check if the least significant bit is set.
    return (N & 1) ? "odd" : "even";
}

int main() {
    // Example usage:
    int number = 5;

    // Check if the number is odd or even.
    std::cout << "The number is " << checkOddEven(number) << ".\n";

    return 0;
}
