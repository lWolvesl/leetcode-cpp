//
// Created by 李洋 on 2025/5/27.
//

class Solution
{
public:
    int differenceOfSums(int n, int m)
    {
        int nums2 = 0;
        for (int i = 1; i * m <= n; i++)
        {
            nums2 += i * m;
        }
        return n * (n + 1) / 2 - nums2 * 2;
    }
};
