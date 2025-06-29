#include <iostream>
#include <vector>
using namespace std;

class Solution {
    public:
        vector<int> zigzagTraversal(vector<vector<int>>& grid) {
            vector<int> ans;
            vector<int> temp;
            for (int i = 0; i < grid.size(); i++) {
                if (i % 2 == 0) {
                    for (int j = 0; j < grid[i].size(); j++) {
                        temp.push_back(grid[i][j]);
                    }
                } else {
                    for (int j = grid[i].size() - 1; j >= 0; j--) {
                        temp.push_back(grid[i][j]);
                    }
                }
            }
            for (int i = 0; i < temp.size(); i++) {
                if (i % 2 == 0) {
                    ans.push_back(temp[i]);
                }
            }

            return ans;
        }
};

int main() {
    Solution sol;
    vector<vector<int>> temp = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    vector<int> temp2 = sol.zigzagTraversal(temp);
    for (int i : temp2) {
        cout << i << " ";
    }

    return 0;
}