/*
 * @lc app=leetcode id=167 lang=cpp
 *
 * [167] Two Sum II - Input Array Is Sorted
 */

// @lc code=start
class Solution {
    public:
        vector<int> twoSum(vector<int> &numbers, int target) {
            int left = 0, right = numbers.size() - 1;
            while (1) {
                int sum = numbers[left] + numbers[right];
                if (sum == target) {
                    return {left + 1, right + 1};
                } else if (sum > target) {
                    right -= 1;
                } else {
                    left += 1;
                }
            }
        }
};
// @lc code=end
