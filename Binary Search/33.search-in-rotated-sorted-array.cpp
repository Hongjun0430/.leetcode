#include <iostream>
#include <vector>
using namespace std;

class Solution {
    public:
        int search(vector<int>& nums, int target) {
            int left = 0, right = nums.size() - 1;
            while (left <= right) {
                int mid = (left + right) / 2;
                if (nums[mid] == target) return mid;

                if (nums[left] <= nums[mid]) {
                    if ((nums[left] <= target) && (target < nums[mid])) {
                        right = mid - 1;
                    } else {
                        left = mid + 1;
                    }
                } else {
                    if ((nums[mid] < target) && (target <= nums[right])) {
                        left = mid + 1;
                    } else {
                        right = mid - 1;
                    }
                }
            }
            return -1;
        }
};

int main() {
    Solution sol;
    vector<int> a = {4, 5, 6, 7, 0, 1, 2};
    int num = 0;
    cout << sol.search(a, num) << endl;

    return 0;
}