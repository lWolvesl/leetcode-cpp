//
// Created by 李洋 on 2023/10/12.
//

#ifndef LEECODE_C_TRAVERSE_H
#define LEECODE_C_TRAVERSE_H
using namespace std;

#include "structs/Tree.h"
#include <queue>

queue<TreeNode *> Q;

//递归写法 - int型
// 先序遍历 preorder traversal
void preorder_recursion_help(TreeNode *head) {
    if (head != nullptr) {
        Q.push(head);
        preorder_recursion_help(head->left);
        preorder_recursion_help(head->right);
    }
}

queue<TreeNode *> preorder_recursion(TreeNode *head) {
    preorder_recursion_help(head);
    return Q;
};

// 中序遍历 inorder traversal
void inorder_recursion_help(TreeNode *head) {
    if (head != nullptr) {
        inorder_recursion_help(head->left);
        Q.push(head);
        inorder_recursion_help(head->right);
    }
}

queue<TreeNode *> inorder_recursion(TreeNode *head) {
    inorder_recursion_help(head);
    return Q;
};

// 后序遍历 postorder traversal
void postorder_recursion_help(TreeNode *head) {
    if (head != nullptr) {
        postorder_recursion_help(head->left);
        postorder_recursion_help(head->right);
        Q.push(head);
    }
}

queue<TreeNode *> postorder_recursion(TreeNode *head) {
    postorder_recursion_help(head);
    return Q;
};

// 非递归写法
// 先序遍历 preorder traversal
queue<TreeNode *> preorder(TreeNode *head) {

}

// 中序遍历 inorder traversal
queue<TreeNode *> inorder(TreeNode *head) {

}

// 后序遍历 postorder traversal
queue<TreeNode *> postorder(TreeNode *head) {

}


#endif //LEECODE_C_TRAVERSE_H
