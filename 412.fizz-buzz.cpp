/*
 * @lc app=leetcode id=412 lang=cpp
 *
 * [412] Fizz Buzz
 */

// @lc code=start
class Solution {
    public:
        vector<string> fizzBuzz(int n) {
            vector<string> ans;
            for (int i = 1; i <= n; i++) {
                string s = "";
                if (i % 3 == 0) s += "Fizz";
                if (i % 5 == 0) s += "Buzz";
                if (s == "") s = to_string(i);
                ans.push_back(s);
            }
            return ans;
        }
};
// @lc code=end
