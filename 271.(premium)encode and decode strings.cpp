/*
 * @lc app=leetcode id=271 lang=cpp
 *
 * [271] Contains Duplicate
 */

// @lc code=start
class Solution
{
public:
    string encode(vector<string> &strs)
    {
        string ans;
        for (string &s : strs)
        {
            ans += to_string(s.length()) + '@' + s;
        } // 4@neet4@code

        return ans;
    }

    vector<string> decode(string s)
    {
        vector<string> ans;
        int i = 0;
        while (i < s.size())
        {
            int j = i, length;
            while (s[j] != '@')
            {
                j++;
            }
            length = stoi(s.substr(i, j - i));
            ans.push_back(s.substr(j + 1, length));
            i = j + 1 + length;
        }

        return ans;
        
    }
};
// @lc code=end