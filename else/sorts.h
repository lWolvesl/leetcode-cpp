//
// Created by 李洋 on 2023/10/19.
//

#ifndef LEECODE_C_SHELLSORT_H
#define LEECODE_C_SHELLSORT_H

#include <vector>

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
int partition() {

}

void split() {

}

void quickSort(vector<int> &arr) {

}

// 快速排序 - end

#endif //LEECODE_C_SHELLSORT_H
