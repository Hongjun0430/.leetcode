#include <algorithm>
#include <iostream>
#include <numeric>
#include <vector>
using namespace std;

class Solution {
    public:
        int largestSumAfterKNegations(vector<int>& nums, int k) {
            sort(nums.begin(), nums.end());

            for (int& n : nums) {
                if (k > 0 && n < 0) {
                    n = -n;
                    k--;
                }
            }

            if (k % 2 == 1) {
                int minVal = *min_element(nums.begin(), nums.end());
                return accumulate(nums.begin(), nums.end(), 0) - 2 * minVal;
            }

            return accumulate(nums.begin(), nums.end(), 0);
        }
};

int main() {
    Solution sol;
    vector<int> temp = {3, -1, 0, 2};
    int n = 3;
    cout << sol.largestSumAfterKNegations(temp, n) << endl;

    return 0;
}