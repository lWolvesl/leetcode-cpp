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
    auto G = Graph(1);

    auto Q = G.DFS(0);
    while (!Q.empty()) {
        cout << Q.front() << " ";
        Q.pop();
    }
}

#endif //LEECODE_C_MAIN_H
