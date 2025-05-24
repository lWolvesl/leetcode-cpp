//
// Created by 李洋 on 2024/6/24.
//

#ifndef LEECODE_CPP_503_H
#define LEECODE_CPP_503_H

#include <vector>

using namespace std;

vector<int> nextGreaterElements(vector<int> &nums) {
    vector<int> ret;
    for (int i = 0; i < nums.size(); i++) {
        int j = i;
        while (j < nums.size()) {
            j = j + 1 == nums.size() ? 0 : ++j;
            if (nums[j] > nums[i]) {
                ret.push_back(nums[j]);
                break;
            }
            if (j==i){
                ret.push_back(-1);
                break;
            }
        }
    }
    return ret;
}

#endif //LEECODE_CPP_503_H
