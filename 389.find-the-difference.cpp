/*
 * @lc app=leetcode id=389 lang=cpp
 *
 * [389] Find the Difference
 */

// @lc code=start
class Solution {
    public:
        char findTheDifference(string s, string t) {
            int scount[26] = {0};
            int tcount[26] = {0};
            for (int i = 0; i < s.size(); i++) {
                ++scount[s[i] - 'a'];
            }
            for (int i = 0; i < t.size(); i++) {
                ++tcount[t[i] - 'a'];
            }
            for (int i = 0; i < 26; i++) {
                if (scount[i] != tcount[i]) {
                    return char(i + 'a');
                }
            }
            return 'a';
        }
};
// @lc code=end
