/*
 * @lc app=leetcode id=128 lang=cpp
 *
 * [128] Longest Consecutive Sequence
 */

// @lc code=start
class Solution
{
public:
    int longestConsecutive(vector<int> &nums)
    {
        unordered_set<int> seen(nums.begin(), nums.end());
        int longest = 0;

        for (int s : seen)
        {
            if (seen.count(s - 1) == 0)
            {
                int length = 1;
                while (seen.count(s + length))
                {
                    length++;
                }
                longest = max(length, longest);
            }
        }

        return longest;
    }
};
// @lc code=end
