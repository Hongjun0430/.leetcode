#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

class Solution {
    public:
        int maxFrequencyElements(vector<int>& nums) {
            int ans = 0, maxFreq = 0;
            unordered_map<int, int> freq;

            for (int n : nums) {
                int f = ++freq[n];
                if (f > maxFreq) {
                    maxFreq = f;
                    ans = f;
                } else if (f == maxFreq) {
                    ans += f;
                }
            }

            return ans;
        }
};

int main() {
    Solution sol;
    vector<int> temp = {1, 2, 3, 4, 5};
    cout << sol.maxFrequencyElements(temp) << endl;

    return 0;
}