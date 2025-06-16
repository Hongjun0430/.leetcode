/*
 * @lc app=leetcode id=11 lang=cpp
 *
 * [11] Container With Most Water
 */

// @lc code=start
class Solution {
    public:
        int maxArea(vector<int>& height) {
            int ans = 0;
            int left = 0, right = height.size() - 1;

            while (left < right) {
                int area = (right - left) * min(height[left], height[right]);

                if (area > ans) ans = area;

                if (height[left] > height[right]) {
                    right--;
                } else {
                    left++;
                }
            }
            return ans;
        }
};
// @lc code=end
