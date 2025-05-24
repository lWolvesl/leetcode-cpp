//
// Created by 17214 on 25-5-21.
//
#include<vector>
#include<iostream>
using namespace std;

class Solution
{
public:
    /**
     * 贪心+模拟判断，效率低
     * @param nums
     * @param queries
     * @return
     */
    int minZeroArray(vector<int>& nums, vector<vector<int>>& queries)
    {
        int tag = 0;
        int ans = 0;
        for (const int num : nums)
        {
            if (num == 0)
            {
                tag++;
            }
        }
        if (tag == nums.size())
        {
            return 0;
        }
        for (const vector<int>& query : queries)
        {
            ans++;
            for (int i = query[0]; i <= query[1]; i++)
            {
                if (nums[i] == 0)
                {
                    continue;
                }
                if (nums[i] <= query[2])
                {
                    tag++;
                    nums[i] = 0;
                }
                else
                {
                    nums[i] -= query[2];
                }
            }
            if (tag == nums.size())
            {
                break;
            }
        }
        return tag != nums.size() ? -1 : ans;
    }

    /**
     * 前缀和/差分快速运算
     * @param nums
     * @param queries
     * @return
     */
    int minZeroArray1(vector<int>& nums, vector<vector<int>>& queries)
    {
        int n = nums.size(), m = queries.size();
        vector<int> diff(n + 1, 0);
        int cnt = 0, k = 0;
        for (int i = 0; i < n; i++)
        {
            int num = nums[i];
            cnt += diff[i];
            while (k < m && cnt < num)
            {
                int left = queries[k][0];
                int right = queries[k][1];
                int val = queries[k][2];
                diff[left] += val;
                diff[right + 1] -= val;
                if (left <= i && i <= right)
                {
                    cnt += val;
                }
                k++;
            }
            if (cnt < num)
            {
                return -1;
            }
        }
        return k;
    }

    void test()
    {
        vector nums = {2, 0, 2};
        vector<vector<int>> queries = {{0, 2, 1}, {0, 1, 1}, {1, 2, 3}};
        cout << minZeroArray1(nums, queries) << endl;
    }
};
