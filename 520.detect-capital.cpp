/*
 * @lc app=leetcode id=520 lang=cpp
 *
 * [520] Detect Capital
 */

// @lc code=start
class Solution {
    public:
        bool detectCapitalUse(string word) {
            bool allCapital = true, allNCapital = true, onlyFirstCapital = true;
            for (int i = 0; i < word.size(); i++) {
                bool isFirst = (i == 0);
                int num = word[i] - 'A';
                if (num > 25) {
                    allCapital = false;
                } else {
                    allNCapital = false;
                }

                if (isFirst) {
                    if (num > 25) {
                        onlyFirstCapital = false;
                    }
                } else {
                    if (num <= 25) {
                        onlyFirstCapital = false;
                    }
                }
            }
            return allCapital || allNCapital || onlyFirstCapital;
        }
};
// @lc code=end
