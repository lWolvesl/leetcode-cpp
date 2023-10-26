//
// Created by 李洋 on 2023/10/12.
//

#ifndef LEECODE_C_MAIN_H
#define LEECODE_C_MAIN_H

#include <iostream>
#include <queue>
#include "./structs/Tree.h"
#include "./traverse.h"
#include "./Heap/test.h"
#include "./sorts.h"
#include "./structs/Graph.h"

using namespace std;

void run() {
    vector<int> arr({3, 1, 5, 6, 8, 2, 4, 6, 7});
    mergeSort(arr, 0, arr.size() - 1);
    for (auto i: arr) {
        cout << i << " ";
    }
}

#endif //LEECODE_C_MAIN_H
