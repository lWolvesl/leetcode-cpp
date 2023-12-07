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
#include "./topic/statistic.h"
#include <iostream>

using namespace std;

void run()
{
    vector<int> arr({3, 2, 2, 4, 6, 2, 3});
    map<int, int> m = statistic(arr);
    for (pair<int, int> p : m)
    {
        if (p.second > 1)
        {
            cout << p.first << endl;
        }
    }
}

#endif // LEECODE_C_MAIN_H
