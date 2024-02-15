#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> arr = {6,8,5,4,2,3}; // replace with your array
    std::sort(arr.begin(), arr.end());

    std::string num1, num2;
    for (int i = 0; i < arr.size(); i++) {
        if (i % 2 == 0)
            num1 += std::to_string(arr[i]);
        else
            num2 += std::to_string(arr[i]);
    }

    std::cout << "The smallest possible sum is: " << std::stoi(num1) + std::stoi(num2) << std::endl;

    return 0;
}
