/*
 * @lc app=leetcode id=169 lang=cpp
 *
 * [169] Majority Element
 */

// @lc code=start
class Solution {
    public:
        int majorityElement(vector<int>& nums) {
            unordered_map<int, int> num;
            for (int n : nums) {
                num[n]++;
            }
            for (auto p : num) {
                if (p.second > (nums.size() / 2)) {
                    return p.first;
                }
            }
            return 0;
        }
};
// @lc code=end
