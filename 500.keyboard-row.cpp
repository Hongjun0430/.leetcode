/*
 * @lc app=leetcode id=500 lang=cpp
 *
 * [500] Keyboard Row
 */

// @lc code=start
class Solution {
    public:
        vector<string> findWords(vector<string>& words) {
            vector<string> ans;
            string str1 = "qwertyuiop";
            string str2 = "asdfghjkl";
            string str3 = "zxcvbnm";

            for (int i = 0; i < words.size(); i++) {
                int count1 = 0, count2 = 0, count3 = 0;
                for (char c : words[i]) {
                    if (str1.find(tolower(c)) != -1) {
                        count1++;
                    }
                    if (str2.find(tolower(c)) != -1) {
                        count2++;
                    }
                    if (str3.find(tolower(c)) != -1) {
                        count3++;
                    }
                }
                if (words[i].length() == count1 ||
                    words[i].length() == count2 ||
                    words[i].length() == count3) {
                    ans.push_back(words[i]);
                }
            }

            return ans;
        }
};
// @lc code=end
