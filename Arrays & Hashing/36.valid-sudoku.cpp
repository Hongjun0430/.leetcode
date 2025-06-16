/*
 * @lc app=leetcode id=36 lang=cpp
 *
 * [36] Valid Sudoku
 */

// @lc code=start
class Solution
{
public:
    bool isValidSudoku(vector<vector<char>> &board)
    {
        for (int row = 0; row < 9; row++)
        {
            unordered_set<char> seen;
            for (int col = 0; col < 9; col++)
            {
                if (board[row][col] == '.')
                {
                    continue;
                }
                else
                {
                    if (seen.count(board[row][col]))
                    { // 有重複
                        return false;
                    }
                    else
                    {
                        seen.insert(board[row][col]); // 未重複
                    }
                }
            }
        }

        for (int col = 0; col < 9; col++)
        {
            unordered_set<char> seen;
            for (int row = 0; row < 9; row++)
            {
                if (board[row][col] == '.')
                {
                    continue;
                }
                else
                {
                    if (seen.count(board[row][col]))
                    { // 有重複
                        return false;
                    }
                    else
                    {
                        seen.insert(board[row][col]); // 未重複
                    }
                }
            }
        }

        for (int i = 0; i < 9; i++)
        {
            unordered_set<char> seen;

            for (int j = 0; j < 3; j++)
            {
                for (int k = 0; k < 3; k++)
                {
                    int row = (i / 3) * 3 + j;
                    int col = (i % 3) * 3 + k;

                    if (board[row][col] == '.')
                    {
                        continue;
                    }
                    else
                    {
                        if (seen.count(board[row][col]))
                        { // 有重複
                            return false;
                        }
                        else
                        {
                            seen.insert(board[row][col]); // 未重複
                        }
                    }
                }
            }
        }

        return true;
    }
};
// @lc code=end
