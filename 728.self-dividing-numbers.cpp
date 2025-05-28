/*
 * @lc app=leetcode id=728 lang=cpp
 *
 * [728] Self Dividing Numbers
 */

// @lc code=start
class Solution {
    public:
        vector<int> selfDividingNumbers(int left, int right) {
            vector<int> ans;
            while (left <= right) {
                int temp = left;
                bool isSelfDividing = true;

                while (temp % 10 >= 0) {
                    if (temp % 10 == 0) {
                        isSelfDividing = false;
                        break;
                    }
                    if (left % (temp % 10) != 0) {
                        isSelfDividing = false;
                    }
                    if (temp / 10 == 0) {
                        break;
                    } else {
                        temp /= 10;
                    }
                }

                if (isSelfDividing) {
                    ans.push_back(left);
                }
                left++;
            }
            return ans;
        }
};
// @lc code=end
