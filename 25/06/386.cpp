//
// Created by 李洋 on 2025/6/9.
//
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> lexicalOrder(int n) {
        vector<int> ans(n);
        int num = 1;
        for (int i = 0; i < n; i++) {
            ans[i] = num;
            if (num * 10 <= n) {
                num *= 10;
            } else {
                while (num % 10 == 9 || num + 1 > n) {
                    num /= 10;
                }
                num++;
            }
        }
        return ans;
    }
};
