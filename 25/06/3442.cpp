//
// Created by 17214 on 25-6-10.
//
#include <string>
#include <unordered_map>
using namespace std;

class Solution
{
public:
    int maxDifference(string s)
    {
        unordered_map<char, int> c;
        for (char ch : s)
        {
            ++c[ch];
        }
        int maxOdd = 1, minEven = s.size();
        for (const auto& [_, value] : c)
        {
            if (value % 2 == 1)
            {
                maxOdd = max(maxOdd, value);
            }
            else
            {
                minEven = min(minEven, value);
            }
        }
        return maxOdd - minEven;
    }
};
