//
// Created by 李洋 on 2023/10/12.
//

#ifndef LEECODE_C_MAIN_H
#define LEECODE_C_MAIN_H

#include <iostream>
#include <queue>
#include "./structs/Tree.h"
#include "./traverse.h"

using namespace std;

void run() {
    TreeNode *node = creatRandomTree(9);
    queue<TreeNode *> Q = postorder_recursion(node);
    while (!Q.empty()) {
        cout << Q.front()->val << " ";
        Q.pop();
    }
}

#endif //LEECODE_C_MAIN_H
