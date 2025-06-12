#include <iostream>
#include <vector>
using namespace std;

class Solution {
    public:
        bool searchMatrix(vector<vector<int>>& matrix, int target) {
            if (matrix.empty() || matrix[0].empty()) return false;

            int m = matrix.size();
            int n = matrix[0].size();
            int left = 0, right = m * n - 1;

            while (left <= right) {
                int mid = (left + right) / 2;
                int row = mid / n;
                int col = mid % n;
                int val = matrix[row][col];

                if (val == target) {
                    return true;
                } else if (val < target) {
                    left = mid + 1;
                } else {
                    right = mid - 1;
                }
            }

            return false;
        }
};

int main() {
    Solution sol;
    vector<vector<int>> a = {{1, 3, 5, 7}, {10, 11, 16, 20}, {23, 30, 34, 60}};
    int num = 16;
    cout << boolalpha << sol.searchMatrix(a, num);
    return 0;
}