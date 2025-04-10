/*
 * @lc app=leetcode id=347 lang=cpp
 *
 * [347] Top K Frequent Elements
 */

// @lc code=start
class Solution
{
public:
    vector<int> topKFrequent(vector<int> &nums, int k)
    {
        vector<int> ans;
        unordered_map<int, int> m;
        for (int n : nums)
        {
            m[n]++;
        }
        vector<pair<int, int>> p;
        for (auto &pair : m)
        {
            p.push_back({pair.second, pair.first});
        }

        sort(p.rbegin(), p.rend());

        for (int i = 0; i < k; i++)
        {
            ans.push_back(p[i].second);
        }

        return ans;
    }
};
// @lc code=end
