#include <bits/stdc++.h>

// Function to check if binary representation contains consecutive 1s
bool hasConsecutiveOnes(int n) {
    while ((n & 3) != 3 && n != 0) {
        n >>= 1;
    }
    return (n & 3) == 3;
}

// Function to print binary representations
void printBinary(int m, int n) {
    for (int i = m + 1; i < n; i++) {
        if (!hasConsecutiveOnes(i)) {
            std::cout << std::bitset<32>(i).to_string() << std::endl;
        }
    }
}

int main() {
    int m, n;
    std::cin >> m >> n;
    printBinary(m, n);
    return 0;
}
