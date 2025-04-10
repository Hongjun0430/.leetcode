/*
 * @lc app=leetcode id=167 lang=cpp
 *
 * [167] Two Sum II - Input Array Is Sorted
 */

// @lc code=start
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        for (int i = 0; i < numbers.size(); ++i)
        {
            for (int j = i + 1; j < numbers.size(); ++j)
            {
                if (numbers[i] + numbers[j] == target)
                {
                    return {i+1, j+1};
                }
            }
        }
        return {};
    }
};
// @lc code=end

