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
#include "./topic/2017.h"
#include <iostream>

using namespace std;

void run()
{
    vector<int> arr({3, 2, 2, 4, 6, 2, 3});
    TreeNode *head = createRandomTree(10);
    reversechild(head);
    lookTree(head);
}

#endif // LEECODE_C_MAIN_H
