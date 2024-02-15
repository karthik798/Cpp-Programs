#include <iostream>

int solve(int N1, int N2, int N3) {
    int count = 0;
    for (int i = 1; i <= N1; i++) {
        for (int j = 1; j <= N2; j++) {
            for (int k = 1; k <= N3; k++) {
                if (i != j && j != k && k != i) {
                    count++;
                }
            }
        }
    }
    return count;
}

int main() {
    int N1, N2, N3;
    std::cin >> N1 >> N2 >> N3;
    std::cout << solve(N1, N2, N3);

    return 0;
}
