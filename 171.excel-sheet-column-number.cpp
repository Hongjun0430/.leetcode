/*
 * @lc app=leetcode id=171 lang=cpp
 *
 * [171] Excel Sheet Column Number
 */

// @lc code=start
class Solution {
    public:
        int titleToNumber(string columnTitle) {
            long long ans = 0;
            for (int c : columnTitle) {
                ans = ans * 26 + (c - 'A' + 1);
            }
            return ans;
        }
};
// @lc code=end
