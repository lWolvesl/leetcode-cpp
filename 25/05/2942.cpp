//
// Created by 17214 on 25-5-24.
//
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int> res;
        for (int i = 0; i < words.size(); i++) {
            const string& word = words[i];
            for (char c : word) {
                if (c == x) {
                    res.push_back(i);
                    break;  // 找到一个匹配就可以停止检查当前单词
                }
            }
        }
        return res;
    }
};