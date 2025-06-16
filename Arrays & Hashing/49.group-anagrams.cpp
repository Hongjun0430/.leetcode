/*
 * @lc app=leetcode id=49 lang=cpp
 *
 * [49] Group Anagrams
 */

// @lc code=start
class Solution
{
public:
    vector<vector<string>> groupAnagrams(vector<string> &strs)
    {
        unordered_map<string, vector<string>> map;
        for (string s : strs)
        {
            string sorted = s;
            sort(sorted.begin(), sorted.end());
            map[sorted].push_back(s);
        }

        vector<vector<string>> ans;
        for (auto &pair : map)
        {
            ans.push_back(pair.second);
        }

        return ans;
    }
};
// @lc code=end
