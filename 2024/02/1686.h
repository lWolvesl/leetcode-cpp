#include <stdlib.h>

// 交换两个元素的值
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// 分割函数，返回中轴位置
int partition(int arr[], int low, int high) {
    int pivot = arr[high]; // 选择数组最后一个元素作为中轴

    // 将小于中轴的元素放在左侧，大于中轴的元素放在右侧
    int i = low - 1;
    for (int j = low; j < high; j++) {
        if (arr[j] <= pivot) {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }

    swap(&arr[i + 1], &arr[high]);
    return i + 1;
}

// 快速排序函数
void quickSort(int arr[], int low, int high) {
    if (low < high) {
        // 获取中轴的位置
        int pivotIndex = partition(arr, low, high);

        // 递归排序中轴左侧和右侧的子数组
        quickSort(arr, low, pivotIndex - 1);
        quickSort(arr, pivotIndex + 1, high);
    }
}

int stoneGameVI(int *aliceValues, int aliceValuesSize, int *bobValues, int bobValuesSize) {
    int diff[aliceValuesSize];
    for (int i = 0; i < aliceValuesSize; i++) {
        diff[i] = aliceValues[i] - bobValues[i];
    }
    quickSort(diff, 0, aliceValuesSize - 1);
    int left = 0;
    int right = aliceValuesSize - 1;
    int round = 0;
    int alice = 0;
    int bob = 0;
    while (left <= right) {
        int tag = abs(diff[left]) > abs(diff[right]);
        if (tag) {
            if (diff[left] < 0) {
                bob += diff[left];
            } else {
                alice += diff[left];
            }
        } else {
            if (diff[right] < 0) {
                alice += diff[right];
            } else {
                bob += diff[right];
            }
        }

    }
    return 0;
}