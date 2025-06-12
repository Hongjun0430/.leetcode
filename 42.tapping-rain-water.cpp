#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

class Solution {
    public:
        int trap(vector<int>& height) {
            int ans = 0;
            for (int i = 1; i < height.size() - 1; i++) {
                int left = 0, right = height.size() - 1;
                int leftMax = 0, rightMax = 0;
                while (left < i) {
                    if (height[left] > leftMax) {
                        leftMax = height[left];
                    }
                    left++;
                }
                while (right > i) {
                    if (height[right] > rightMax) {
                        rightMax = height[right];
                    }
                    right--;
                }
                if ((min(rightMax, leftMax) - height[i]) > 0) {
                    ans += min(rightMax, leftMax) - height[i];
                }
            }

            return ans;
        }
};

int main() {
    Solution sol;
    vector<int> a = {4, 2, 0, 3, 2, 5};
    cout << sol.trap(a) << endl;

    return 0;
}
