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

using namespace std;

void run() {
    auto TreeNode = creatRandomTree(10);
    auto Q = postorder(TreeNode);
    while (!Q.empty()) {
        cout << Q.front()->val << " ";
        Q.pop();
    }
}

#endif //LEECODE_C_MAIN_H
