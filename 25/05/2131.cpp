class Solution {
public:
    int longestPalindrome(vector<string>& words) {
        unordered_map<string, int> m;
        int res = 0;
        int center = 0; // 用于标记是否有一个自反字符串可以放在中间
        
        for (auto& word : words) {
            m[word]++;
        }
        
        for (auto& [word, count] : m) {
            if (count == 0) continue;
            
            string reversed = word;
            reverse(reversed.begin(), reversed.end());
            
            if (reversed == word) { // 自反字符串
                int pairs = count / 2;
                res += pairs * 4;
                if (count % 2 == 1) {
                    center = 2; // 可以有一个放在中间
                }
            } else { // 非自反字符串
                if (m.count(reversed)) {
                    int pairs = min(count, m[reversed]);
                    res += pairs * 4;
                    m[word] -= pairs;
                    m[reversed] -= pairs;
                }
            }
        }
        
        return res + center;
    }
};