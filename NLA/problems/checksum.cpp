#include <iostream>
#include <vector>
#include <algorithm>

int checksum(int num) {
    if(num == 0) return 0;
    std::vector<int> digits;
    while(num > 0) {
        digits.push_back(num % 10);
        num /= 10;
    }
    std::sort(digits.begin(), digits.end());
    int sum = 0;
    for(int i = 1; i < digits.size() - 1; i++) {
        sum += digits[i];
    }
    return sum;
}

int main() {
    int N;
    std::cin >> N;
    std::vector<int> list(N);
    for(int i = 0; i < N; i++) {
        std::cin >> list[i];
    }
    int sum = 0;
    for(int num : list) {
        sum += checksum(num);
    }
    std::cout << sum << std::endl;
    return 0;
}
