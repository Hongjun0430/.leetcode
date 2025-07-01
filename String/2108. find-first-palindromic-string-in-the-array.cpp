#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Solution {
    public:
        bool isPalindrome(const string& s) {
            int left = 0, right = s.size() - 1;
            while (left < right) {
                if (s[left++] != s[right--]) return false;
            }
            return true;
        }

        string firstPalindrome(vector<string>& words) {
            for (const string& word : words) {
                if (isPalindrome(word)) return word;
            }
            return "";
        }
};

int main() {
    Solution sol;
    vector<string> temp = {"abc", "car", "ada", "racecar", "cool"};
    cout << sol.firstPalindrome(temp) << endl;

    return 0;
}