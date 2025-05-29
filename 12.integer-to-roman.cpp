/*
 * @lc app=leetcode id=12 lang=cpp
 *
 * [12] Integer to Roman
 */

// @lc code=start
class Solution {
    public:
        string intToRoman(int num) {
            string ans = "";
            const int values[] = {1000, 900, 500, 400, 100, 90, 50,
                                  40,   10,  9,   5,   4,   1};
            const char* romans[] = {"M",  "CM", "D",  "CD", "C",  "XC", "L",
                                    "XL", "X",  "IX", "V",  "IV", "I"};

            for (int i = 0; i < 13; i++) {
                int times = num / values[i];
                num %= values[i];

                while (times--) {
                    ans += romans[i];
                }
            }

            return ans;
        }
};
// @lc code=end
