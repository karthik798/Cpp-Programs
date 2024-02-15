#include <iostream>
#include <vector>

void backtrack(const std::vector<int>& nums, int start, std::vector<int>& current, std::vector<std::vector<int>>& result) {
    result.push_back(current);

    for (int i = start; i < nums.size(); ++i) {
        current.push_back(nums[i]);
        backtrack(nums, i + 1, current, result);
        current.pop_back();
    }
}

std::vector<std::vector<int>> subsets(const std::vector<int>& nums) {
    std::vector<std::vector<int>> result;
    std::vector<int> current;
    backtrack(nums, 0, current, result);
    return result;
}

int main() {
    // Example usage:
    std::vector<int> nums = {1, 2, 3};
    std::vector<std::vector<int>> result = subsets(nums);

    std::cout << "Subsets:\n";
    for (const std::vector<int>& subset : result) {
        std::cout << "[";
        for (int num : subset) {
            std::cout << num << " ";
        }
        std::cout << "]\n";
    }

    return 0;
}
