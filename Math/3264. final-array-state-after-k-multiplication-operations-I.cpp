#include <iostream>
#include <vector>

using namespace std;

class Solution {
    public:
        vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
            for (int i = 0; i < k; i++) {
                int minpos = 0;
                for (int j = 1; j < nums.size(); j++) {
                    if (nums[j] < nums[minpos]) {
                        minpos = j;
                    }
                }
                nums[minpos] *= multiplier;
            }
            return nums;
        }
};

int main() {
    Solution sol;
    vector<int> temp = {2, 1, 3, 5, 6};
    int a = 5, b = 2;
    vector<int> ans = sol.getFinalState(temp, a, b);

    for (int n : ans) {
        cout << n << " ";
    }

    return 0;
}