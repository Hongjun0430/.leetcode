#include <cctype>
#include <iostream>
#include <string>

using namespace std;

class Solution {
    public:
        int secondHighest(string s) {
            int largest = -1;
            int second = -1;
            for (char c : s) {
                if (isdigit(c)) {
                    int num = c - '0';
                    if (num > largest) {
                        second = largest;
                        largest = num;
                        continue;
                    } else if (num != largest && num > second) {
                        second = num;
                    }
                }
            }
            return second;
        }
};

int main() {
    Solution sol;
    string str = "abc1111";
    cout << sol.secondHighest(str) << endl;
    return 0;
}