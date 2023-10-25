//
// Created by 李洋 on 2023/10/19.
//

#ifndef LEECODE_C_SHELLSORT_H
#define LEECODE_C_SHELLSORT_H

#include <vector>
#include <random>
#include <iostream>

using namespace std;

void shellSort(vector<int> &arr) {
    int n = arr.size();

    // 选择增量序列，可以根据需要选择不同的序列
    for (int gap = n / 2; gap > 0; gap /= 2) {
        // 使用插入排序对每个子数组进行排序
        for (int i = gap; i < n; ++i) {
            int temp = arr[i];
            int j = i;
            while (j >= gap && arr[j - gap] > temp) {
                arr[j] = arr[j - gap];
                j -= gap;
            }
            arr[j] = temp;
        }
    }
}

// 快速排序 - start
int partition(vector<int> &arr, int left, int right) {
    int norm = left;
    while (left < right) {
        while (left < right && arr[norm] <= arr[right]) {
            right--;
        }
        while (left < right && arr[norm] >= arr[left]) {
            left++;
        }
        swap(arr[left], arr[right]);
    }
    swap(arr[norm], arr[left]);
    return left;
}

void splits(vector<int> &arr, int left, int right) {
    if (left < right) {
        auto norm = partition(arr, left, right);
        splits(arr, left, norm - 1);
        splits(arr, norm + 1, right);
    }
}

void quickSort(vector<int> &arr) {
    splits(arr, 0, arr.size() - 1);
}

// 快速排序 - end

queue<int> heapSort(vector<int> &arr) {

}

void runS() {
//    std::random_device rd;
//    std::mt19937 gen(rd());
//    std::uniform_int_distribution<int> dis(1, 100);
    vector<int> nums;
    nums.reserve(10);
//    for (int i = 0; i < 10; ++i) {
//        nums.push_back(dis(gen));
//    }
    nums.push_back(11);
    nums.push_back(6);
    nums.push_back(9);
    nums.push_back(23);
    nums.push_back(6);
    nums.push_back(11);
    nums.push_back(26);
    nums.push_back(40);
    nums.push_back(8);
    nums.push_back(95);
    for (int i: nums) {
        cout << i << " ";
    }
    cout << endl;
    shellSort(nums);
    for (int i: nums) {
        cout << i << " ";
    }
}

#endif //LEECODE_C_SHELLSORT_H
