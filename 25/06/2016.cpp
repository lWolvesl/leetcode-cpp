//
// Created by 17214 on 25-6-16.
//
#include <vector>
#include <stack>
using namespace std;

class Solution
{
public:
    int maximumDifference(vector<int>& nums)
    {
        int s[nums.size()];
        int top = 0;
        s[0] = nums[0];
        int ans = -1;
        for (int i = 1; i < nums.size(); ++i)
        {
            while (top != -1 && s[top] >= nums[i])
            {
                top--;
            }
            s[++top] = nums[i];
            if (top != 0)
            {
                ans = max(ans, s[top] - s[0]);
            }
        }
        return ans;
    }
};
