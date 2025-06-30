#include <iostream>
#include <vector>

using namespace std;

class Solution {
    public:
        vector<int> runningSum(vector<int>& nums) {
            int sum = 0;
            vector<int> ans;
            for (int n : nums) {
                sum += n;
                ans.push_back(sum);
            }

            return ans;
        }
};

int main() {
    Solution sol;
    vector<int> temp = {3, 1, 2, 10, 1};
    vector<int> ans = sol.runningSum(temp);
    for (int n : ans) {
        cout << n << " ";
    }

    return 0;
}