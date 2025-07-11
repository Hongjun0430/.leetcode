#include <iostream>
#include <unordered_set>
#include <vector>

using namespace std;

class Solution {
    public:
        int minOperations(vector<int>& nums, int k) {
            unordered_set<int> seen;
            int step = 0;
            for (int i = nums.size() - 1; i >= 0; i--) {
                step++;
                if (nums[i] <= k && nums[i] >= 1) {
                    seen.insert(nums[i]);
                }
                if (seen.size() == k) {
                    return step;
                }
            }

            return -1;
        }
};

int main() {
    Solution sol;
    vector<int> temp = {3, 2, 5, 3, 1};
    int n = 3;
    cout << sol.minOperations(temp, n) << endl;
    return 0;
}