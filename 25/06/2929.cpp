//
// Created by 17214 on 25-6-1.
//
#include <algorithm>
using namespace std;

class Solution
{
public:
    long long distributeCandies(int n, int limit)
    {
        long long res = 0;
        for (int i = 0; i <= min(n, limit); ++i)
        {
            int last = n - i;
            if (last > 2 * limit)
            {
                continue;
            }
            res += min(last, limit) - max(0, last - limit) + 1;
        }
        return res;
    }
};
