#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

class Solution {
    public:
        int trap(vector<int>& height) {
            int ans = 0;
            int left = 0, right = height.size() - 1;
            int leftMax = 0, rightMax = 0;

            while (left <= right) {
                if (height[left] <= height[right]) {
                    if (height[left] >= leftMax) {
                        leftMax = height[left];
                    } else {
                        ans += leftMax - height[left];
                    }
                    left++;
                } else {
                    if (height[right] >= rightMax) {
                        rightMax = height[right];
                    } else {
                        ans += rightMax - height[right];
                    }
                    right--;
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
