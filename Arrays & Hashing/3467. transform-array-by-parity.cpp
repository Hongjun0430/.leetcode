#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

class Solution {
    public:
        vector<int> transformArray(vector<int>& nums) {
            for (int i = 0; i < nums.size(); i++) {
                if (nums[i] % 2 == 0) {
                    nums[i] = 0;
                } else {
                    nums[i] = 1;
                }
            }
            sort(nums.begin(), nums.end());
            return nums;
        }
};

int main() {
    Solution sol;
    vector<int> temp = {1, 5, 1, 4, 2};
    vector<int> ans = sol.transformArray(temp);
    for (int n : ans) {
        cout << n << " ";
    }
    return 0;
}