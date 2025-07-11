#include <iostream>
#include <string>

using namespace std;

class Solution {
    public:
        int minMaxDifference(int num) {
            string sMax = to_string(num);
            string sMin = sMax;

            char targetMax = 0;
            for (char& c : sMax) {
                if (c != '9') {
                    targetMax = c;
                    break;
                }
            }
            if (targetMax) {
                for (char& c : sMax)
                    if (c == targetMax) c = '9';
            }

            char targetMin = sMin[0];
            for (char& c : sMin)
                if (c == targetMin) c = '0';

            return stoi(sMax) - stoi(sMin);
        }
};

int main() {
    Solution sol;
    int n = 11891;
    cout << sol.minMaxDifference(n) << endl;

    return 0;
}