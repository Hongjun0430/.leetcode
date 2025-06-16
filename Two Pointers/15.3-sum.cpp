/*
 * @lc app=leetcode id=15 lang=cpp
 *
 * [15] 3Sum
 */

// @lc code=start
class Solution {
    public:
        vector<vector<int>> threeSum(vector<int>& nums) {
            sort(nums.begin(), nums.end());
            vector<vector<int>> ans;
            for (int first = 0; first < nums.size() - 2; first++) {
                if (nums[first] > 0) break;
                if (first > 0 && nums[first] == nums[first - 1]) {
                    continue;
                }
                int left = first + 1;
                int right = nums.size() - 1;

                while (left < right) {
                    int target = -nums[first];
                    int sum = nums[left] + nums[right];

                    if (target == sum) {
                        ans.push_back({nums[first], nums[left], nums[right]});

                        while (left < right && nums[left] == nums[left + 1]) {
                            left++;
                        }
                        while (left < right && nums[right] == nums[right - 1]) {
                            right--;
                        }

                        left++;
                        right--;
                    } else if (sum > target) {
                        right--;
                    } else {
                        left++;
                    }
                }
            }

            return ans;
        }
};
// @lc code=end
