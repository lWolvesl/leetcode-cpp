//
// Created by 李洋 on 2025/6/13.
//
#include <vector>
using namespace std;

class Solution {
public:
    int help(vector<int> nums, int target) {
        int left = 0;
        int right = nums.size() - 1;
        int middle = 0;
        while (left <= right) {
            middle = left + (right - left) / 2;
            if (nums[middle] < target) {
                left = middle + 1;
            } else {
                right = middle - 1;
            }
        }
        return left;
    }

    vector<int> searchRange(vector<int> &nums, int target) {
        int start = help(nums, target);
        if (start == nums.size() || nums[start] != target) {
            return vector<int>{-1, -1};
        }
        return vector<int>{start, help(nums, target + 1) - 1};
    }
};
