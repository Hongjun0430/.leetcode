/*
 * @lc app=leetcode id=415 lang=cpp
 *
 * [415] Add Strings
 */

// @lc code=start
class Solution {
    public:
        string addStrings(string num1, string num2) {
            string ans = "";
            if (num2.length() > num1.length()) {
                string temp = "";
                temp = num1;
                num1 = num2;
                num2 = temp;
            }
            reverse(num1.begin(), num1.end());
            reverse(num2.begin(), num2.end());
            int carry = 0;

            for (int i = 0; i < num1.length(); i++) {
                int bitA = num1[i] - '0', bitB = 0;
                if (i < num2.length()) {
                    bitB = num2[i] - '0';
                }
                ans += to_string((bitA + bitB + carry) % 10);
                if (((bitA + bitB + carry) / 10) == 1) {
                    carry = 1;
                } else {
                    carry = 0;
                }
            }
            if (carry == 1) {
                ans += '1';
            }
            reverse(ans.begin(), ans.end());
            return ans;
        }
};
// @lc code=end
