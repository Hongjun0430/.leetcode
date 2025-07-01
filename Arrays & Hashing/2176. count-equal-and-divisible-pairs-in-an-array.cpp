#include <iostream>
#include <vector>

using namespace std;

class Solution {
    public:
        int countPairs(vector<int>& nums, int k) {
            int count = 0;
            for (int i = 0; i < nums.size(); i++) {
                for (int j = i + 1; j < nums.size(); j++) {
                    if ((nums[i] == nums[j]) && ((i * j) % k == 0)) {
                        count++;
                    }
                }
            }

            return count;
        }
};

int main() {
    Solution sol;
    vector<int> temp = {1, 2, 3, 4};
    int n = 1;
    cout << sol.countPairs(temp, n) << endl;

    return 0;
}