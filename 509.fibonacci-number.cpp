/*
 * @lc app=leetcode id=509 lang=cpp
 *
 * [509] Fibonacci Number
 */

// @lc code=start
class Solution {
    public:
        int Fibonacci(int a) {
            if (a == 0) {
                return 0;
            } else if (a == 1) {
                return 1;
            } else {
                return Fibonacci(a - 1) + Fibonacci(a - 2);
            }
        }
        int fib(int n) { return Fibonacci(n); }
};
// @lc code=end
