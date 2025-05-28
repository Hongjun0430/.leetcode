/*
 * @lc app=leetcode id=342 lang=cpp
 *
 * [342] Power of Four
 */

// @lc code=start
class Solution {
    public:
        bool isPowerOfFour(int n) {
            if (n == 0) return false;
            if (n == 1) return true;

            while (n % 4 == 0) {
                if (n / 4 == 1) {
                    return true;
                } else {
                    n /= 4;
                }
            }
            return false;
        }
};
// @lc code=end
