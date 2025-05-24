#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define MIN(a, b) ((a) < (b) ? (a) : (b))

const int INF = 0x3f3f3f3f;


struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
};

typedef struct SubTree {
    bool isBST;
    int minValue;
    int maxValue;
    int sumValue;
} SubTree;

SubTree *createSubTree(bool isBST, int minValue,int maxValue, int sumValue) {
    SubTree *obj = (SubTree *)malloc(sizeof(SubTree));
    obj->isBST = isBST;
    obj->minValue = minValue;
    obj->maxValue = maxValue;
    obj->sumValue = sumValue;
    return obj;
}

SubTree* dfs(struct TreeNode* root, int *res) {
    if (root == NULL) {
        return createSubTree(true, INF, -INF, 0);
    }
    SubTree *left = dfs(root->left, res);
    SubTree *right = dfs(root->right, res);
    SubTree *ret = NULL;

    if (left->isBST && right->isBST &&
          root->val > left->maxValue &&
          root->val < right->minValue) {
        int sum = root->val + left->sumValue + right->sumValue;
        *res = MAX(*res, sum);
        ret = createSubTree(true, MIN(left->minValue, root->val), \
                            MAX(root->val, right->maxValue), sum);
    } else {
        ret = createSubTree(false, 0, 0, 0);
    }
    free(left);
    free(right);
    return ret;
}

int maxSumBST(struct TreeNode* root){
    int res = 0;
    SubTree *obj = dfs(root, &res);
    free(obj);
    return res;
}