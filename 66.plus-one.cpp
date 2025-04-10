/*
 * @lc app=leetcode id=66 lang=cpp
 *
 * [66] Plus One
 */

// @lc code=start
class Solution
{
public:
    vector<int> plusOne(vector<int> &digits)
    {
        digits[digits.size() - 1] += 1;
        for (int i = digits.size() - 1; i >= 0; i--)
        {

            if (digits[i] == 10)
            {
                if (i != 0)
                {
                    digits[i] = 0;
                    digits[i - 1] += 1;
                }
                else
                {
                    digits[i] = 0;
                    digits.insert(digits.begin(), 1);
                }
            }
        }

        return digits;
    }
};
// @lc code=end
