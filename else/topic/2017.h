#include "../structs/Tree.h"
#include <queue>

using namespace std;

void reversechild(TreeNode *root)
{
    TreeNode *head = root;
    queue<TreeNode *> q;
    q.push(head);
    while (!q.empty())
    {
        head = q.front();
        q.pop();
        if (head->left)
        {
            q.push(head->left);
        }
        if (head->right)
        {
            q.push(head->right);
        }
        swap(head->left, head->right);
    }
}

#include <unordered_map>
#include <vector>

using namespace std;

unordered_map<int, int> statistic(vector<int> L1)
{
    unordered_map<int, int> m;
    for (auto i : L1)
    {
        m[i] = m[i] + 1;
    }
    return m;
}
