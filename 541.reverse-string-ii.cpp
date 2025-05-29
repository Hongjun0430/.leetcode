/*
 * @lc app=leetcode id=541 lang=cpp
 *
 * [541] Reverse String II
 */

// @lc code=start
class Solution {
    public:
        string reverseStr(string s, int k) {
            int start = 0, n = s.length();

            for (int i = 1; i <= n; i++) {
                int num = i - start;
                if (num == (2 * k)) {
                    reverse(s.begin() + start, s.begin() + start + k);
                    start = i;
                }
                if (i == n) {
                    if ((num < 2 * k) && (num >= k)) {
                        reverse(s.begin() + start, s.begin() + start + k);
                    } else if (num < k) {
                        reverse(s.begin() + start, s.begin() + i);
                    }
                }
            }

            return s;
        }
};
// @lc code=end
