/*
 * @lc app=leetcode id=67 lang=cpp
 *
 * [67] Add Binary
 */

// @lc code=start
class Solution {
    public:
        string addBinary(string a, string b) {
            string ans = "";
            if (b.length() > a.length()) {
                string temp = a;
                a = b;
                b = temp;
            }
            reverse(a.begin(), a.end());
            reverse(b.begin(), b.end());
            int carry = 0;
            for (int i = 0; i < a.length(); i++) {
                int bitA = a[i] - '0';
                int bitB = 0;
                if (i < b.length()) {
                    bitB = b[i] - '0';
                }

                if (bitA + bitB + carry == 3) {
                    ans += "1";
                    carry = 1;
                } else if (bitA + bitB + carry == 2) {
                    ans += "0";
                    carry = 1;
                } else if (bitA + bitB + carry == 1) {
                    ans += "1";
                    carry = 0;
                } else {
                    ans += "0";
                    carry = 0;
                }
            }
            if (carry == 1) {
                ans += "1";
            }
            reverse(ans.begin(), ans.end());
            return ans;
        }
};
// @lc code=end
