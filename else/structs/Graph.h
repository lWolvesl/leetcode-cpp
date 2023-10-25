//
// Created by 李洋 on 2023/10/21.
// 以邻接矩阵实现的INT图及其具体操作
//

#ifndef LEECODE_C_GRAPH_H
#define LEECODE_C_GRAPH_H

#include <vector>
#include <set>
#include <map>

using namespace std;

class Graph {
public:
    Graph *GraphByEdge(vector<vector<int>> Edges) {
        for (auto Edge: Edges) {
            vertex.insert(Edge[1]);
            vertex.insert(Edge[2]);
        }
        return this;
    }

private:
    vector<vector<int>> G; // adjacent matrix
    vector<vector<int>> visited;

    set<int> vertex;   // The collection of vertex
    set<set<int>> ccp; // The graph has multiple connected components.
};

#endif //LEECODE_C_GRAPH_H
