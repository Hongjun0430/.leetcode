#include <iostream>
#include <string>

using namespace std;

class Solution {
    public:
        int furthestDistanceFromOrigin(string moves) {
            int right = 0, left = 0, dash = 0;
            for (char c : moves) {
                if (c == '_') {
                    dash++;
                } else if (c == 'R') {
                    right++;
                } else {
                    left++;
                }
            }

            if (left > right) {
                return left - right + dash;
            } else if (right > left) {
                return right - left + dash;
            }
            return dash;
        }
};

int main() {
    Solution sol;
    string str = "L_RL__R";
    cout << sol.furthestDistanceFromOrigin(str) << endl;

    return 0;
}