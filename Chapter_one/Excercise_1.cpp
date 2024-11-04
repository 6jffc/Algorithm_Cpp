#include <iostream>
#include <vector>
#include <limits>

int maxSubsequenceWeight(const std::vector<int>& nums) {
    int max_weight = std::numeric_limits<int>::min(); // Khởi tạo giá trị tối đa
    int current_sum = 0; // Khởi tạo tổng hiện tại

    for (int num : nums) {
        current_sum += num;
        if (current_sum > max_weight) {
            max_weight = current_sum;
        }
        if (current_sum < 0) {
            current_sum = 0; // Đặt lại tổng nếu nó âm
        }
    }

    return max_weight;
}

int main() {
    std::vector<int> sequence = {-2, 11, -4, 13, -5, 2};
    int result = maxSubsequenceWeight(sequence);
    std::cout << "The maximum weight of the subsequence is: " << result << std::endl;
    return 0;
}
