//
// Created by 17214 on 25-5-22.
//
#include <algorithm>
#include <queue>
#include <vector>
using namespace std;

/**
 * 换个思路，就是从queries中找到最小可以完成将nums变为0数组的query的个数
 */
class Solution {
public:
    /**
     * 差分+贪心:找端小且右端大
     * @param nums
     * @param queries
     * @return
     */
    int maxRemoval(vector<int>& nums, vector<vector<int>>& queries) {
        sort(queries.begin(), queries.end(), [](const vector<int>& a,const vector<int>& b)
        {
           return a[0]<b[0];
        });

        priority_queue<int> heap;
        vector<int> div(nums.size()+1, 0);
        int op = 0;
        for(int i=0,j=0;i<nums.size();i++)
        {
            op += div[i];
            while (j < queries.size() && queries[j][0] == i)
            {
                heap.push(queries[j][1]);
                ++j;
            }
            while (op < nums[i] && !heap.empty() && heap.top() >= i)
            {
                op += 1;
                div[heap.top()+1] -= 1;
                heap.pop();
            }
            if (op < nums[i])
            {
                return -1;
            }
        }
        return heap.size();
    }
};