//
// Created by 李洋 on 2023/8/14.
//

#ifndef LEECODE_C_TREE_H
#define LEECODE_C_TREE_H

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

#endif //LEECODE_C_TREE_H
