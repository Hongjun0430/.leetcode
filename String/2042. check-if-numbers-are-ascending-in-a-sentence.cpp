#include <cctype>
#include <iostream>
#include <string>

using namespace std;

class Solution {
    public:
        bool areNumbersAscending(string s) {
            int last = 0;
            for (int i = 0; i < s.size(); i++) {
                int now = 0;
                if (isdigit(s[i])) {
                    if ((i + 1) < s.size() && isdigit(s[i + 1])) {
                        now = (s[i] - '0') * 10 + (s[i + 1] - '0');
                        i++;
                    } else {
                        now = s[i] - '0';
                    }

                    if (last < now) {
                        last = now;
                    } else {
                        return false;
                    }
                }
            }
            return true;
        }
};

int main() {
    Solution sol;
    string str =
        "sunset is at 7 51 pm overnight lows will be in the low 50 and 60 s";
    cout << boolalpha << sol.areNumbersAscending(str);
    return 0;
}