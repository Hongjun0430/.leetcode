#include <iostream>
#include <vector>
using namespace std;

// class Solution {
//     public:
//         int findMin(vector<int> &nums) {
//             for (int i = 1; i < nums.size(); i++) {
//                 if (nums[i] < nums[i - 1]) {
//                     return nums[i];
//                 }
//             }
//             return nums[0];
//         }
// };

class Solution {
    public:
        int findMin(vector<int> &nums) {
            int left = 0, right = nums.size() - 1;
            while (left < right) {
                int mid = (left + right) / 2;
                if (nums[mid] > nums[right]) {
                    left = mid + 1;
                } else {
                    right = mid;
                }
            }
            return nums[left];
        }
};

int main() {
    Solution sol;
    vector<int> a = {11, 13, 15, 17};
    cout << sol.findMin(a) << endl;
    return 0;
}