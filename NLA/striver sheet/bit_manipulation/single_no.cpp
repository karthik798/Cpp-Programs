#include <iostream>
#include <vector>

int findSingleNumber(const std::vector<int>& nums) {
    int result = 0;
    for (int num : nums) {
        result ^= num;
    }
    return result;
}

int main() {
    // Example usage:
    std::vector<int> nums1 = {2, 2, 1};
    std::vector<int> nums2 = {4, 1, 2, 1, 2};

    int result1 = findSingleNumber(nums1);
    int result2 = findSingleNumber(nums2);

    std::cout << "Single number in nums1: " << result1 << std::endl;
    std::cout << "Single number in nums2: " << result2 << std::endl;

    return 0;
}
