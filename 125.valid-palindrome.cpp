/*
 * @lc app=leetcode id=125 lang=cpp
 *
 * [125] Valid Palindrome
 */

// @lc code=start
class Solution
{
public:
    bool isPalindrome(string s)
    {
        string sorted, resorted;
        for (int i = 0; i < s.size(); i++)
        {
            if (isalnum(s[i]))
            {
                sorted += tolower(s[i]);
            }
        }

        for (int i = sorted.size() - 1; i >= 0; i--)
        {
            resorted += sorted[i];
        }

        return sorted == resorted;
    }
};
// @lc code=end
