#include <iostream>
#include <vector>

std::vector<int> findOddOccurrences(const std::vector<int>& arr) {
    int xorResult = 0;

    // Calculate XOR of all elements in the array
    for (int num : arr) {
        xorResult ^= num;
    }

    // Find the rightmost set bit in XOR result
    int rightmostSetBit = xorResult & -xorResult;

    // Initialize two numbers to find with odd occurrences
    int num1 = 0, num2 = 0;

    // Divide the array elements into two groups based on rightmost set bit
    for (int num : arr) {
        if (num & rightmostSetBit) {
            num1 ^= num;
        } else {
            num2 ^= num;
        }
    }

    // Ensure num1 is greater than or equal to num2
    if (num1 < num2) {
        std::swap(num1, num2);
    }

    return {num1, num2};
}

int main() {
    // Example usage:
    std::vector<int> arr = {2, 4, 1, 3, 2, 4};

    // Find the two numbers with odd occurrences and print the result
    std::vector<int> result = findOddOccurrences(arr);

    std::cout << "Two numbers with odd occurrences: " << result[0] << ", " << result[1] << std::endl;

    return 0;
}
